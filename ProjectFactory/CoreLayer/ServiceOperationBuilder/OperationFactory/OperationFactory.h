#ifndef _OF_H_
#define _OF_H_

#include <iostream>
#include "../../ServiceConfig.h"
#include "../../Operations/Operation.h"
template <typename T>
class OperationFactory
{
public:
	virtual bool canCreate(ServiceConfig<T>* config) = 0;
	virtual Operation* create(ServiceConfig<T>* config) = 0;
};

#endif