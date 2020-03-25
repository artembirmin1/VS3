#include <iostream>
#include "LogOperationFactory.h"
#include "../OperationFactory.h"
#include "../../../Operations/LogOperation/LogOperation.h"
#include "../../../ServiceConfig.h"

template <typename T>
bool  LogOperationFactory<T>::canCreate(ServiceConfig<T>* config)
{
	if (config->logOperationData == NULL)
		return false;
	else
		return true;
}
template <typename T>
Operation* LogOperationFactory<T>::create(ServiceConfig<T>* config)
{
	LogOperation* logOp = new LogOperation;
	logOp->logOperationData = config->logOperationData;
	return logOp;
}