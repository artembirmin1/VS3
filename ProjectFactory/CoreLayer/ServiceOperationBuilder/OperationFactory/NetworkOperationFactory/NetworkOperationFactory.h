#pragma once
#include <iostream>
#include "../OperationFactory.h"
#include "../../../Operations/NetworkOperation/NetworkOperation.h"
#include "../../../ServiceConfig.h"

class NetworkOperationFactory : public OperationFactory
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};
