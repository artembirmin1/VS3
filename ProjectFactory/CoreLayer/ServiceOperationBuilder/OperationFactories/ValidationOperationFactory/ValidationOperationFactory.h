#pragma once
#include <iostream>
#include "../OperationFactories.h"
#include "../../../Operations/ValidationOperation/ValidationOperation.h"
#include "../../../ServiceConfig.h"

class ValidationOperationFactory : public OperationFactories
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};
