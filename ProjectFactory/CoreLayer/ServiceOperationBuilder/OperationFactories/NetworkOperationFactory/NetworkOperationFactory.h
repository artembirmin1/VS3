#pragma once
#include <iostream>
#include "../OperationFactories.h"
#include "../../../Operations/NetworkOperation/NetworkOperation.h"
#include "../../../ServiceConfig.h"

class NetworkOperationFactory : public OperationFactories
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};
