#include <iostream>
#include "DeserializationOperationFactory.h"
#include "../OperationFactory.h"
#include "../../../Operations/DeserializationOperation/DeserializationOperation.h"
#include "../../../ServiceConfig.h"

bool  DeserializationOperationFactory::canCreate(ServiceConfig* config)
{
	return true;
}

Operation* DeserializationOperationFactory::create(ServiceConfig* config)
{
	return (new DeserializationOperation(config->deserializationOperationData));
}