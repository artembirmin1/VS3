#include <iostream>
#include "ValidationOperationFactory.h"
#include "../OperationFactories.h"
#include "../../../Operations/ValidationOperation/ValidationOperation.h"
#include "../../../ServiceConfig.h"


bool  ValidationOperationFactory::canCreate(ServiceConfig* config)
{
	return (config->validationOperationData != NULL);
}

Operation* ValidationOperationFactory::create(ServiceConfig* config)
{
	return new ValidationOperation(config->validationOperationData);
}