#ifndef _SOF_H_
#define _SOF_H_

#include <iostream>
#include "../OperationFactory.h"
#include "../../../Operations/SerializationOperation/SerializationOperation.h"
#include "../../../ServiceConfig.h"

template<typename T>
class SerializationOperationFactory : public OperationFactory
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};

#include "SerializationOperationFactory.cpp"

#endif


