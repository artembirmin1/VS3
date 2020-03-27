#pragma once
#include <iostream>
#include "../OperationFactory.h"
#include "../../../Operations/RequestConfigurationOperation/RequestConfigurationOperation.h"
#include "../../../ServiceConfig.h"
class RequestConfigurationOperationFactory : public OperationFactory
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};
