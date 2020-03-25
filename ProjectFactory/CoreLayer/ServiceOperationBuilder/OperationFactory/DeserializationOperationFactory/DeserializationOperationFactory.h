#pragma once
#include <iostream>
#include "../OperationFactory.h"
#include "../../../Operations/DeserializationOperation/DeserializationOperation.h"
#include "../../../ServiceConfig.h"
template <typename T>
class DeserializationOperationFactory : public OperationFactory
{
public:
	bool canCreate(ServiceConfig<T>* config);
	Operation* create(ServiceConfig<T>* config);
};
