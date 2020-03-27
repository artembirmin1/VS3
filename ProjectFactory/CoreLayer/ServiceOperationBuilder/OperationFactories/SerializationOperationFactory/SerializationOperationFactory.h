#ifndef _SOF_H_
#define _SOF_H_

#include <iostream>
#include "../OperationFactories.h"
#include "../../../Operations/SerializationOperation/SerializationOperation.h"
#include "../../../ServiceConfig.h"

template<typename T>
class SerializationOperationFactory : public OperationFactories
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};

#include "SerializationOperationFactory.cpp"

#endif


