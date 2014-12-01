/*
 * externalinterface.cpp
 *
 *  Created on: Nov 26, 2014
 *      Author: dhiman
 */

#include "externalinterface.h"
#include <sys/types.h>
#include <sys/socket.h> /* for socket(), bind(), and connect() */
#include <arpa/inet.h>  /* for sockaddr_in and inet_ntoa() */
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stddef.h>
#include <unistd.h>
#include <pthread.h>
#include <stdio.h> 

external_interface::external_interface() {
	// TODO Auto-generated constructor stub
	puts("external interface constructor");
	int error_code = init_modules();

}

external_interface::~external_interface() {
	// TODO Auto-generated destructor stub
}

int external_interface::init_modules() {
	puts("init tasks");
	return 1;
}

