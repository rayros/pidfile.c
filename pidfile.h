#ifndef PIDFILE_H
#define PIDFILE_H

#include <unistd.h>
#include <sys/file.h>
#include <errno.h>

/* return 0 if ok or -1 if another instance is running */
int
lock_pid_file(int *ptr,         /* int *ptr - pointer for open file */
              char *file_name); /* char *file_name file name: (char *) "program.pid" */

/* return 0 if close or -1 if fail. */
int 
unlock_pid_file(int *ptr); /* int *ptr - open file pointer */

#endif
