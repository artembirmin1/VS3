#pragma once
#include <iostream>
#include "../OperationFactory.h"
#include "../../../ServiceConfig.h"
#include "../../../Operations/LogOperation/LogOperation.h"

class LogOperationFactory : public OperationFactory
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};