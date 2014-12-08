//============================================================================
//// Name        : assistgps.cpp
//// Author      : ashish
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C, Ansi-style
////============================================================================
//
#include <stdio.h>
#include <stdlib.h>
#include "externalinterface.h"
#include <sys/types.h> /* pid_t */
#include <sys/wait.h>  /* waitpid */
#include <stdio.h>     /* printf, perror */
#include <stdlib.h>    /* exit */
#include <unistd.h>    /* _exit, fork */
#include <iostream>
using namespace std;
#if defined(__cplusplus)
extern "C"
#endif

int main(void) {

pid_t  pid;
pid = fork();
cout << "pid is" << pid;
if (pid == -1) {
      // When fork() returns -1, an error happened.
      perror("fork failed");
      exit(EXIT_FAILURE);
}
if (pid == 0) { /* make a seperate process for external interface */
external_interface *e;
e = new external_interface();
}
puts("!!!Hello World!!!");
return EXIT_SUCCESS;
}

