#ifndef OS_METHODS_H_
#define OS_METHODS_H_
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

class os_methods {
public:
	os_methods();
public:
	pthread_t create_task();
//	extern "C" void* request_handler();
};

#endif /* OS_METHODS_H_ */
