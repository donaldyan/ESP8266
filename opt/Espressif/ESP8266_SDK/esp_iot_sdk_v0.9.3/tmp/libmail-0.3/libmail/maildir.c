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

#include <stdio.h>
#include <string.h>
#include <dirent.h>

#include <libmail/libmail.h>
#include <libmail/error.h>

static int count_messages_in_directory(const char *directory) {
	
	DIR *dir;
	struct dirent *dir_contents;
	int n_messages = 0;

	if ((dir = opendir(directory)) == NULL)
		return LIBMAIL_SYSERROR;
	while ((dir_contents = readdir(dir)) != NULL) {
		if (strcmp(dir_contents->d_name, ".") != 0 && strcmp(dir_contents->d_name, "..") != 0)
			n_messages++;
	}
	if (closedir(dir) != 0)
		return LIBMAIL_SYSERROR;
	return n_messages;	
}

int maildir_check(maildir_mailbox_t *maildir, int *n_new_messages, int *n_messages) {
	
	char buffer_dir[PATH_MAX+1];

	sprintf(buffer_dir, "%s/cur/", maildir->dir);
	if ((*n_messages = count_messages_in_directory(buffer_dir)) < 0)
		return LIBMAIL_SYSERROR;
	sprintf(buffer_dir, "%s/new/", maildir->dir);
	if ((*n_new_messages = count_messages_in_directory(buffer_dir)) < 0)
		return LIBMAIL_SYSERROR;
	return LIBMAIL_SUCCESS;	
}
