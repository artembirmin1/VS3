#pragma once
#include <iostream>
#include "../OperationFactory.h"
#include "../../../ServiceConfig.h"
#include "../../../Operations/LogOperation/LogOperation.h"
template <typename T>
class LogOperationFactory : public OperationFactory<T>
{
public:
	bool canCreate(ServiceConfig<T>* config);
	Operation* create(ServiceConfig<T>* config);
};