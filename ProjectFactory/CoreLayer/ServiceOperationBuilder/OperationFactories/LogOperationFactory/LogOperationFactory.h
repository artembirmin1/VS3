#pragma once
#include <iostream>
#include "../OperationFactories.h"
#include "../../../ServiceConfig.h"
#include "../../../Operations/LogOperation/LogOperation.h"

class LogOperationFactory : public OperationFactories
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};