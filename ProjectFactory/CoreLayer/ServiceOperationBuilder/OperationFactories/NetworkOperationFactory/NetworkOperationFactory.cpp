#include <iostream>
#include "NetworkOperationFactory.h"
#include "../OperationFactories.h"
#include "../../../Operations/NetworkOperation/NetworkOperation.h"
#include "../../../ServiceConfig.h"

bool  NetworkOperationFactory::canCreate(ServiceConfig* config)
{
	return true;
}

Operation* NetworkOperationFactory::create(ServiceConfig* config)
{
	
	
	return new NetworkOperation(config->networkOperationData);
}