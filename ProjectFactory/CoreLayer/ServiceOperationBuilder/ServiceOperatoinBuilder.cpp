#ifndef _SOB_CPP_
#define _SOB_CPP_

#include <iostream>
#include <vector>
#include "OperationFactories/OperationFactories.h"
#include "OperationFactories/ValidationOperationFactory/ValidationOperationFactory.h"
#include "OperationFactories/LogOperationFactory/LogOperationFactory.h"
#include "OperationFactories/NetworkOperationFactory/NetworkOperationFactory.h"
#include "OperationFactories/RequestConfigurationOperationFactory/RequestConfigurationOperationFactory.h"
#include "OperationFactories/DeserializationOperationFactory/DeserializationOperationFactory.h"
#include"ServiceOperatoinBuilder.h"
#include"../Operations/Operation.h"
#include"../ServiceConfig.h"
#include"../Operations/DeserializationOperation/DeserializationOperation.h"
#include"../Operations/LogOperation/LogOperation.h"
#include"../Operations/NetworkOperation/NetworkOperation.h"
#include"../Operations/RequestConfigurationOperation/RequestConfigurationOperation.h"
#include"../Operations/SerializationOperation/SerializationOperation.h"
#include"../Operations/ValidationOperation/ValidationOperation.h"

using namespace std;

template<typename T>
vector <Operation*> ServiceOperatoinBuilder<T>::obtainOperations(ServiceConfig* config)
{
	vector <Operation*> operationsVector;
	for (OperationFactories* someOp : operationFactories)
	{
		if(someOp->canCreate(config) == true)
		operationsVector.push_back(someOp->create(config));
	}
	return operationsVector;
}

#endif


