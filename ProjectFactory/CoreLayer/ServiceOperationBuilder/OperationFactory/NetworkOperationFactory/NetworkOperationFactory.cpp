#include <iostream>
#include "NetworkOperationFactory.h"
#include "../OperationFactory.h"
#include "../../../Operations/NetworkOperation/NetworkOperation.h"
#include "../../../ServiceConfig.h"

bool  NetworkOperationFactory::canCreate(ServiceConfig* config)
{
	return true;
}

Operation* NetworkOperationFactory::create(ServiceConfig* config)
{
	NetworkOperation* netOp = new NetworkOperation;
	netOp->networkOperationData = config->networkOperationData;
	return netOp;
}