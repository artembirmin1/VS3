#pragma once
#include <iostream>
#include "../OperationFactories.h"
#include "../../../Operations/RequestConfigurationOperation/RequestConfigurationOperation.h"
#include "../../../ServiceConfig.h"
class RequestConfigurationOperationFactory : public OperationFactories
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};
