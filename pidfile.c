#include "pidfile.h"

int
i_lock_pid_file(int *ptr, char *file_name) {
  *ptr = open(file_name, O_CREAT | O_RDWR, 0666); // open file
  int rc = flock(*ptr, LOCK_EX | LOCK_NB); // lock access to open file
  if(rc && EWOULDBLOCK == errno) // check lock success
    return -1; // another instance is running
  return 0; // success
}
