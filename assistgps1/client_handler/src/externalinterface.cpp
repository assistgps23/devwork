/*
 * externalinterface.cpp
 *
 *  Created on: Nov 26, 2014
 *      Author: dhiman
 */

#include "externalinterface.h"
//#include <sys/types.h>

external_interface::external_interface() {
	// TODO Auto-generated constructor stub
	puts("external interface constructor");
	int error_code = init_tasks();

}

external_interface::~external_interface() {
	// TODO Auto-generated destructor stub
}

int external_interface::init_tasks() {
	puts("init tasks");
//	pid_t childpid;
//	childpid = fork();
	return 1;

}

