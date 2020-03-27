#ifndef _SOF_CPP_
#define _SOF_CPP_

#include <iostream>
#include "SerializationOperationFactory.h"
#include "../OperationFactory.h"
#include "../../../Operations/SerializationOperation/SerializationOperation.h"
#include "../../../ServiceConfig.h"

template<typename T>
bool  SerializationOperationFactory<T>::canCreate(ServiceConfig* config)
{
	GenericServiceConfig<T>* config1 = static_cast<GenericServiceConfig<T>*>(config);
	if (config1->serializationOperationData == NULL)
		return false;
	else
		return true;
}

template<typename T>
Operation* SerializationOperationFactory<T>::create(ServiceConfig* config)
{

	GenericServiceConfig<T>* config1 = static_cast<GenericServiceConfig<T>*>(config);
	SerializationOperation<T>* serOp = new SerializationOperation<T>;
	serOp->serializationOperationData = config1->serializationOperationData;
	return serOp;
}

#endif