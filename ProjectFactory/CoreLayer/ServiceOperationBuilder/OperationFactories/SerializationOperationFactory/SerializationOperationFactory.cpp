#ifndef _SOF_CPP_
#define _SOF_CPP_

#include <iostream>
#include "SerializationOperationFactory.h"
#include "../OperationFactories.h"
#include "../../../Operations/SerializationOperation/SerializationOperation.h"
#include "../../../ServiceConfig.h"

template<typename T>
bool  SerializationOperationFactory<T>::canCreate(ServiceConfig* config)
{
	GenericServiceConfig<T>* genConfig = static_cast<GenericServiceConfig<T>*>(config);
	return (genConfig->serializationOperationData != NULL);
}

template<typename T>
Operation* SerializationOperationFactory<T>::create(ServiceConfig* config)
{
	GenericServiceConfig<T>* genConfig = static_cast<GenericServiceConfig<T>*>(config);
	return new SerializationOperation<T>(genConfig->serializationOperationData);
}

#endif