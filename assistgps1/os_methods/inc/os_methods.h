#ifndef OS_METHODS_H_
#define OS_METHODS_H_
#include <stdio.h>
#include <stdlib.h>

class os_methods {
public:
	os_methods();
private:
	void * create_task(void *);
	void *request_handler();
};

#endif /* OS_METHODS_H_ */
