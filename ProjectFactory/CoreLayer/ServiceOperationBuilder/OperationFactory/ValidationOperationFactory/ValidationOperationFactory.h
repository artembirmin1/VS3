#pragma once
#include <iostream>
#include "../OperationFactory.h"
#include "../../../Operations/ValidationOperation/ValidationOperation.h"
#include "../../../ServiceConfig.h"

class ValidationOperationFactory : public OperationFactory
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};
