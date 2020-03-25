#include <iostream>
#include "ValidationOperationFactory.h"
#include "../OperationFactory.h"
#include "../../../Operations/ValidationOperation/ValidationOperation.h"
#include "../../../ServiceConfig.h"


bool  ValidationOperationFactory::canCreate(ServiceConfig* config)
{
	if (config->validationOperationData == NULL)
		return 0;
	else return 1;
}

Operation* ValidationOperationFactory::create(ServiceConfig* config)
{
	ValidationOperation* valOp = new ValidationOperation;
	valOp->validationOperationData = config->validationOperationData;
	return valOp;
}