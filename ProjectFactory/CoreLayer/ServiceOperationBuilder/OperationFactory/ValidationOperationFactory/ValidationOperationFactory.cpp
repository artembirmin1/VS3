#include <iostream>
#include "ValidationOperationFactory.h"
#include "../OperationFactory.h"
#include "../../../Operations/ValidationOperation/ValidationOperation.h"
#include "../../../ServiceConfig.h"


bool  ValidationOperationFactory::canCreate(ServiceConfig* config)
{
	return (config->validationOperationData != NULL);
}

Operation* ValidationOperationFactory::create(ServiceConfig* config)
{
	return(new ValidationOperation(config->validationOperationData));
}