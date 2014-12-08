#include "os_methods.h"
#include<pthread.h>
#if defined(__cplusplus)
extern "C"
#endif

os_methods::os_methods() {
	// TODO Auto-generated constructor stub

}
extern "C" void* request_handler(void *) {
	puts("!!!request_handler");

}

pthread_t os_methods::create_task(){
	 pthread_t threadId;
	 int ret = pthread_create(&threadId, NULL,&request_handler,NULL);
	 pthread_join(threadId,0);
	    if(ret != 0)
	        return  NULL;
	    else
	        return threadId;
}
