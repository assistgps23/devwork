/*
 * externalinterface.h
 *
 *  Created on: Nov 26, 2014
 *      Author: dhiman
 */

#ifndef EXTERNALINTERFACE_H_
#define EXTERNALINTERFACE_H_

#include <stdio.h>
#include <stdlib.h>

class external_interface {
public:
	external_interface();
	~external_interface();
private:
	int init_modules();
};

#endif /* EXTERNALINTERFACE_H_ */
