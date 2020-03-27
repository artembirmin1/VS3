#include <iostream>
#include "LogOperationFactory.h"
#include "../OperationFactory.h"
#include "../../../Operations/LogOperation/LogOperation.h"
#include "../../../ServiceConfig.h"

bool  LogOperationFactory::canCreate(ServiceConfig* config)
{
	return (config->logOperationData != NULL);
}

Operation* LogOperationFactory::create(ServiceConfig* config)
{
	return (new LogOperation(config->logOperationData));
}