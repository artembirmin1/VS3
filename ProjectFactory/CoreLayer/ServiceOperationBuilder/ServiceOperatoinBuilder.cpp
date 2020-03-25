
#include <iostream>
#include <vector>
#include "OperationFactory/OperationFactory.h"
#include "OperationFactory/ValidationOperationFactory/ValidationOperationFactory.h"
#include "OperationFactory/LogOperationFactory/LogOperationFactory.h"
#include "OperationFactory/NetworkOperationFactory/NetworkOperationFactory.h"
#include "OperationFactory/RequestConfigurationOperationFactory/RequestConfigurationOperationFactory.h"
#include "../ServiceConfig.h"
#include "OperationFactory/DeserializationOperationFactory/DeserializationOperationFactory.h"
#include"ServiceOperatoinBuilder.h"
#include"../Operations/Operation.h"


#include"../Operations/DeserializationOperation/DeserializationOperation.h"
#include"../Operations/LogOperation/LogOperation.h"
#include"../Operations/NetworkOperation/NetworkOperation.h"
#include"../Operations/RequestConfigurationOperation/RequestConfigurationOperation.h"
#include"../Operations/SerializationOperation/SerializationOperation.h"
#include"../Operations/ValidationOperation/ValidationOperation.h"

using namespace std;

vector <Operation*> ServiceOperatoinBuilder::obtainOperations(ServiceConfig* config)
{
	vector <Operation*> operationsVector;
	
	for (OperationFactory* someOp : operationFactories)
	{
		if(someOp->canCreate(config) == true)
		operationsVector.push_back(someOp->create(config));
	}

	return operationsVector;
}

