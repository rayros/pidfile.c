#ifndef PIDFILE_H
#define PIDFILE_H

#include <unistd.h>
#include <sys/file.h>
#include <errno.h>


/* return 0 if ok or -1 if another instance is running */
#define lock_pid_file(ptr, file_name) i_lock_pid_file(&ptr, file_name)
int
i_lock_pid_file(int *ptr,  /* int *ptr - pointer for open file */
         char *file_name); /* char *file_name file name: (char *) "program.pid" */

/* int *ptr - open file pointer */
#define unlock_pid_file(ptr) close(ptr) 

#endif
