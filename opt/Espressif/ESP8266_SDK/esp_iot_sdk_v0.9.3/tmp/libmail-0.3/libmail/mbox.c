/* This file is part of libmail.

(c) 2009 - Dimitris Mandalidis <mandas@users.sourceforge.net>

libmail is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

libmail is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with libmail.  If not, see <http://www.gnu.org/licenses/>.

*/

#include <config.h>

#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <assert.h>

#include <libmail/libmail.h>
#include <libmail/error.h>

int mbox_check(mbox_mailbox_t *mbox, int *n_new_messages, int *n_messages) {

	char buffer[999];
	FILE *fp;
	char *ptr;
	struct stat buf;

	// Make sure we 're not trying to open a directory
	if (stat(mbox->file, &buf) != 0)
		return LIBMAIL_SYSERROR;
	if (S_ISDIR(buf.st_mode))
		return LIBMAIL_MBOX_ISDIR;
	//
	if ((fp = fopen(mbox->file, "r")) == NULL)
		return LIBMAIL_SYSERROR;
	
	*n_messages = 0;
	*n_new_messages = 0;
	int in_header = 0;

	while (fgets(buffer, 998, fp) != NULL) {
		if (!in_header) {
			if (strncmp(buffer, "From ", 5) == 0) {
				(*n_messages)++;
				(*n_new_messages)++;
				in_header = 1;
			}
		}	
		else {
			if (strncmp(buffer, "Status: ", 8) == 0) {
				ptr = &buffer[8];
				if (strchr(ptr, 'R') || strchr(ptr, 'O'))
					(*n_new_messages)--;
			}
			else if (strcmp(buffer, "\r\n") == 0 || strcmp(buffer, "\n") == 0)
				in_header = 0;
		}
	}
	assert(*n_new_messages < 0);

	if (fclose(fp) != 0)
		return LIBMAIL_SYSERROR;
	return LIBMAIL_SUCCESS; 
}
