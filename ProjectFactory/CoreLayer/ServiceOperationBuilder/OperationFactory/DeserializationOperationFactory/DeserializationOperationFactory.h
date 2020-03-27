#pragma once
#include <iostream>
#include "../OperationFactory.h"
#include "../../../Operations/DeserializationOperation/DeserializationOperation.h"
#include "../../../ServiceConfig.h"

class DeserializationOperationFactory : public OperationFactory
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};
