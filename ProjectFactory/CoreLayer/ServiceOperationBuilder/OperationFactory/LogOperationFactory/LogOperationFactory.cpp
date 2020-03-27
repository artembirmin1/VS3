#include <iostream>
#include "LogOperationFactory.h"
#include "../OperationFactory.h"
#include "../../../Operations/LogOperation/LogOperation.h"
#include "../../../ServiceConfig.h"


bool  LogOperationFactory::canCreate(ServiceConfig* config)
{
	if (config->logOperationData == NULL)
		return false;
	else
		return true;
}

Operation* LogOperationFactory::create(ServiceConfig* config)
{
	LogOperation* logOp = new LogOperation;
	logOp->logOperationData = config->logOperationData;
	return logOp;
}