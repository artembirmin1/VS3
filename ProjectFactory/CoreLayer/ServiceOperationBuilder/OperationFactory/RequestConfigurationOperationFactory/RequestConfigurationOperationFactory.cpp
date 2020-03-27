#include <iostream>
#include "RequestConfigurationOperationFactory.h"
#include "../OperationFactory.h"
#include "../../../Operations/RequestConfigurationOperation/RequestConfigurationOperation.h"

#include"../../../ServiceConfig.h"

bool  RequestConfigurationOperationFactory::canCreate(ServiceConfig* config)
{
	return true;
}

Operation* RequestConfigurationOperationFactory::create(ServiceConfig* config)
{
	RequestConfigurationOperation* reqOp = new RequestConfigurationOperation;
	reqOp->requestConfigurationData = config->requestConfigurationOperationData;
	return reqOp;
}