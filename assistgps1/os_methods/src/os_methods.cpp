#include "os_methods.h"
#include<pthread.h>

os_methods::os_methods() {
	// TODO Auto-generated constructor stub

}

void * os_methods::request_handler() {
	puts("!!!request_handler");

}

void * os_methods::create_task(void *request_handler){
	 pthread_t threadId;
	 int ret = pthread_create(&threadId, NULL, (void *)request_handler, (void *)this);
	    if(ret != 0)
	        return  NULL;
	    else
	        return (void *) threadId;
}
