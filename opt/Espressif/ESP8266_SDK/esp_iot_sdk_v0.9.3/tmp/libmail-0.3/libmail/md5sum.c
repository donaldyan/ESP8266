/* This file is part of libmail.

(c) 2009 - Dimitris Mandalidis <mandas@users.sourceforge.net>

libmail is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
libmail is free software: you can redistribute it and/or modify
(at your option) any later version.

libmail is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with libmail.  If not, see <http://www.gnu.org/licenses/>.

*/

#include <config.h>

#ifdef LIBMAIL_USE_APOP

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <strings.h>

#include <assert.h>

struct ctx_t {
	uint32_t A;
	uint32_t B;
	uint32_t C;
	uint32_t D;
};

static void md5_init_ctx(struct ctx_t *ctx) {
	ctx->A = 0x67452301UL;
	ctx->B = 0xefcdab89UL;
	ctx->C = 0x98badcfeUL;
	ctx->D = 0x10325476UL;
}

#define MD5_PAD_BITS(b) ((((b) / 448) << 9) + 448 - (b))

static uint32_t F(uint32_t X, uint32_t Y, uint32_t Z) { 
	return (X & Y) | ((~X) & Z);
}

static uint32_t G(uint32_t X, uint32_t Y, uint32_t Z) { 
	return (X & Z) | (Y & (~Z));
}

static uint32_t H(uint32_t X, uint32_t Y, uint32_t Z) { 
	return X ^ Y ^ Z;
}

static uint32_t I(uint32_t X, uint32_t Y, uint32_t Z) { 
	return Y ^ (X | (~Z));
}

static uint32_t ROL(uint32_t X, uint8_t s) {
	return (X << s) | (X >> (32-s));
}

static uint32_t ROUND1(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t X, uint8_t s, uint32_t T) { 
	return b + ROL(a + F(b,c,d) + X + T,s);
}

static uint32_t ROUND2(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t X, uint8_t s, uint32_t T) { 
	return b + ROL(a + G(b,c,d) + X + T,s);
}

static uint32_t ROUND3(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t X, uint8_t s, uint32_t T) { 
	return b + ROL(a + H(b,c,d) + X + T,s);
}

static uint32_t ROUND4(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t X, uint8_t s, uint32_t T) { 
	return b + ROL(a + I(b,c,d) + X + T,s);
}

#define REVERSE(x) ((((x) & 0xff) << 24) | (((x) & 0xff00) << 8) | (((x) & 0xff0000) >> 8) | (((x) & 0xff000000) >> 24))

#define POS(i,j) ((i << 4)+j)

#define WRITE_WORD(s, w) \
	( ((unsigned char *) (s)) [0] = ((w) & 0xff), \
	  ((unsigned char *) (s)) [1] = ((w) & 0xff00) >> 8, \
	  ((unsigned char *) (s)) [2] = ((w) & 0xff0000) >> 16, \
	  ((unsigned char *) (s)) [3] = ((w) & 0xff000000) >> 24)



unsigned char *md5_digest(unsigned char *digest, const char *src) {
	
	uint32_t n_pad_bits, n_bits, n_total_bits;
	uint32_t n_32_words, n_16_word_blocks;

	uint32_t n_pad_bytes, n_bytes, n_total_bytes;

	struct ctx_t ctx;
	
	uint32_t i;
	
	uint32_t *M;
	
	uint32_t AA, BB, CC, DD;
	
	// Padding bytes. A maximum of 448 bits, and 64-bit message size will be padded
	uint8_t pad[64] = {  0x80, 0, 0, 0, 0, 0, 0, 0,
							0, 0, 0, 0, 0, 0, 0, 0,
							0, 0, 0, 0, 0, 0, 0, 0,
							0, 0, 0, 0, 0, 0, 0, 0,
							0, 0, 0, 0, 0, 0, 0, 0,
							0, 0, 0, 0, 0, 0, 0, 0,
							0, 0, 0, 0, 0, 0, 0, 0,
							0, 0, 0, 0, 0, 0, 0, 0 };
	
	uint32_t T[64] = { 	0xd76aa478UL, 0xe8c7b756UL, 0x242070dbUL, 0xc1bdceeeUL,
  						0xf57c0fafUL, 0x4787c62aUL, 0xa8304613UL, 0xfd469501UL,
  						0x698098d8UL, 0x8b44f7afUL, 0xffff5bb1UL, 0x895cd7beUL,
  						0x6b901122UL, 0xfd987193UL, 0xa679438eUL, 0x49b40821UL,
						0xf61e2562UL, 0xc040b340UL, 0x265e5a51UL, 0xe9b6c7aaUL,
						0xd62f105dUL, 0x2441453UL,  0xd8a1e681UL, 0xe7d3fbc8UL,
						0x21e1cde6UL, 0xc33707d6UL, 0xf4d50d87UL, 0x455a14edUL,
						0xa9e3e905UL, 0xfcefa3f8UL, 0x676f02d9UL, 0x8d2a4c8aUL,
						0xfffa3942UL, 0x8771f681UL, 0x6d9d6122UL, 0xfde5380cUL,
						0xa4beea44UL, 0x4bdecfa9UL, 0xf6bb4b60UL, 0xbebfbc70UL,
						0x289b7ec6UL, 0xeaa127faUL, 0xd4ef3085UL, 0x4881d05UL,
						0xd9d4d039UL, 0xe6db99e5UL, 0x1fa27cf8UL, 0xc4ac5665UL,
						0xf4292244UL, 0x432aff97UL, 0xab9423a7UL, 0xfc93a039UL,
						0x655b59c3UL, 0x8f0ccc92UL, 0xffeff47dUL, 0x85845dd1UL,
						0x6fa87e4fUL, 0xfe2ce6e0UL, 0xa3014314UL, 0x4e0811a1UL,
						0xf7537e82UL, 0xbd3af235UL, 0x2ad7d2bbUL, 0xeb86d391UL };

	unsigned char *buffer; 

	// STEP 1: append pad bits.
	n_bytes = strlen(src);
	n_bits = n_bytes << 3;
	n_pad_bits = MD5_PAD_BITS(n_bits);
	if (n_pad_bits == 0)
		n_pad_bits = 512;
	n_pad_bytes = n_pad_bits >> 3;	
	n_total_bits = n_bits+n_pad_bits+64;
	n_total_bytes = n_total_bits >> 3;
	n_32_words = n_total_bits >> 5;
	n_16_word_blocks = n_32_words >> 4;
	// STEP 2: append length (endianess unsafe)
	buffer = malloc(n_total_bytes);
	assert(buffer != NULL);
	memset(buffer, 0, n_total_bytes);
	memcpy(buffer, src, n_bytes);
	memcpy(buffer+n_bytes, pad, n_pad_bytes);
	WRITE_WORD(buffer+n_bytes+n_pad_bytes, n_bits);
	M = (uint32_t *) buffer;
	// STEP 3:
	md5_init_ctx(&ctx);
	// STEP 4:
	for (i = 0; i < n_16_word_blocks; i++) {
		AA = ctx.A;
		BB = ctx.B;
		CC = ctx.C;
		DD = ctx.D;
		// Round 1
		ctx.A = ROUND1(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,0)], 7,   T[0]);
		ctx.D = ROUND1(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,1)], 12,  T[1]);
		ctx.C = ROUND1(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,2)], 17,  T[2]);
		ctx.B = ROUND1(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,3)], 22,  T[3]);

		ctx.A = ROUND1(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,4)],  7,  T[4]);
		ctx.D = ROUND1(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,5)],  12, T[5]);
		ctx.C = ROUND1(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,6)],  17, T[6]);
		ctx.B = ROUND1(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,7)],  22, T[7]);
		
		ctx.A = ROUND1(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,8)],  7,  T[8]);
		ctx.D = ROUND1(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,9)],  12, T[9]);
		ctx.C = ROUND1(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,10)], 17, T[10]);
		ctx.B = ROUND1(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,11)], 22, T[11]);
		
		ctx.A = ROUND1(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,12)], 7,  T[12]);
		ctx.D = ROUND1(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,13)], 12, T[13]);
		ctx.C = ROUND1(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,14)], 17, T[14]);
		ctx.B = ROUND1(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,15)], 22, T[15]);
		// Round 2
        ctx.A = ROUND2(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,1)],  5,  T[16]);
        ctx.D = ROUND2(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,6)],  9,  T[17]);
        ctx.C = ROUND2(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,11)], 14, T[18]);
        ctx.B = ROUND2(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,0)],  20, T[19]);

        ctx.A = ROUND2(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,5)],  5,  T[20]);
        ctx.D = ROUND2(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,10)], 9,  T[21]);
        ctx.C = ROUND2(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,15)], 14, T[22]);
        ctx.B = ROUND2(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,4)],  20, T[23]);
    
        ctx.A = ROUND2(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,9)],  5,  T[24]);
        ctx.D = ROUND2(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,14)], 9,  T[25]);
        ctx.C = ROUND2(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,3)],  14, T[26]);
        ctx.B = ROUND2(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,8)],  20, T[27]);
    
        ctx.A = ROUND2(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,13)], 5,  T[28]);
        ctx.D = ROUND2(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,2)],  9,  T[29]);
        ctx.C = ROUND2(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,7)],  14, T[30]);
        ctx.B = ROUND2(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,12)], 20, T[31]);
		// Round 3
        ctx.A = ROUND3(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,5)],  4,  T[32]);
        ctx.D = ROUND3(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,8)],  11, T[33]);
        ctx.C = ROUND3(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,11)], 16, T[34]);
        ctx.B = ROUND3(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,14)], 23, T[35]);

        ctx.A = ROUND3(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,1)],  4,  T[36]);
        ctx.D = ROUND3(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,4)],  11, T[37]);
        ctx.C = ROUND3(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,7)],  16, T[38]);
        ctx.B = ROUND3(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,10)], 23, T[39]);
    
        ctx.A = ROUND3(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,13)],  4, T[40]);
        ctx.D = ROUND3(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,0)],  11, T[41]);
        ctx.C = ROUND3(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,3)],  16, T[42]);
        ctx.B = ROUND3(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,6)],  23, T[43]);
    
        ctx.A = ROUND3(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,9)],  4,  T[44]);
        ctx.D = ROUND3(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,12)], 11, T[45]);
        ctx.C = ROUND3(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,15)], 16, T[46]);
        ctx.B = ROUND3(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,2)], 23, T[47]);
		// Round 4
        ctx.A = ROUND4(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,0)],  6,  T[48]);
        ctx.D = ROUND4(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,7)],  10, T[49]);
        ctx.C = ROUND4(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,14)], 15, T[50]);
        ctx.B = ROUND4(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,5)],  21, T[51]);

        ctx.A = ROUND4(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,12)], 6,  T[52]);
        ctx.D = ROUND4(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,3)],  10, T[53]);
        ctx.C = ROUND4(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,10)], 15, T[54]);
        ctx.B = ROUND4(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,1)],  21, T[55]);
    
        ctx.A = ROUND4(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,8)],  6,  T[56]);
        ctx.D = ROUND4(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,15)], 10, T[57]);
        ctx.C = ROUND4(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,6)],  15, T[58]);
        ctx.B = ROUND4(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,13)], 21, T[59]);
    
        ctx.A = ROUND4(ctx.A, ctx.B, ctx.C, ctx.D, M[POS(i,4)],  6,  T[60]);
        ctx.D = ROUND4(ctx.D, ctx.A, ctx.B, ctx.C, M[POS(i,11)], 10, T[61]);
        ctx.C = ROUND4(ctx.C, ctx.D, ctx.A, ctx.B, M[POS(i,2)],  15, T[62]);
        ctx.B = ROUND4(ctx.B, ctx.C, ctx.D, ctx.A, M[POS(i,9)],  21, T[63]);
		// End
		ctx.A += AA;
		ctx.B += BB;
		ctx.C += CC;
		ctx.D += DD;
	}
	free(buffer);
	sprintf((char *) digest, "%08x%08x%08x%08x", REVERSE(ctx.A), REVERSE(ctx.B), REVERSE(ctx.C), REVERSE(ctx.D));
	return digest;
}

#endif
