#pragma once
#include <iostream>
#include "../OperationFactories.h"
#include "../../../Operations/DeserializationOperation/DeserializationOperation.h"
#include "../../../ServiceConfig.h"

class DeserializationOperationFactory : public OperationFactories
{
public:
	bool canCreate(ServiceConfig* config);
	Operation* create(ServiceConfig* config);
};
