#include <iostream>
#include "SerializationOperationFactory.h"
#include "../OperationFactory.h"
#include "../../../Operations/SerializationOperation/SerializationOperation.h"
#include "../../../ServiceConfig.h"
template <typename T>
bool  SerializationOperationFactory<T>::canCreate(ServiceConfig<T>* config)
{
	if (config->serializationOperationData == NULL)
		return false;
	else
		return true;
}
template <typename T>
Operation* SerializationOperationFactory<T>::create(ServiceConfig<T>* config)
{
	SerializationOperation<T>* serOp = new SerializationOperation<T>;
	serOp->serializationOperationData = config->serializationOperationData;
	return serOp;
}