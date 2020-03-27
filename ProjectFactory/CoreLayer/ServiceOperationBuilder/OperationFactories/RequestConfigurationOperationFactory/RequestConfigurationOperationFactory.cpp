#include <iostream>
#include "RequestConfigurationOperationFactory.h"
#include "../OperationFactories.h"
#include "../../../Operations/RequestConfigurationOperation/RequestConfigurationOperation.h"
#include"../../../ServiceConfig.h"

bool  RequestConfigurationOperationFactory::canCreate(ServiceConfig* config)
{
	return true;
}

Operation* RequestConfigurationOperationFactory::create(ServiceConfig* config)
{
	return new RequestConfigurationOperation(config->requestConfigurationOperationData);
}