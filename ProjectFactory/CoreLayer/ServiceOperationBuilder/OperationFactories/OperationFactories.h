#ifndef _OF_H_
#define _OF_H_

#include <iostream>
#include "../../ServiceConfig.h"
#include "../../Operations/Operation.h"

class OperationFactories
{
public:
	virtual bool canCreate(ServiceConfig* config) = 0;
	virtual Operation* create(ServiceConfig* config) = 0;
};

#endif