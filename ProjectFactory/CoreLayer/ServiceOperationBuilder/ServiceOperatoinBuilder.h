#pragma once
#ifndef _SOB_H_
#define _SOB_H_

#include <iostream> 
#include <vector>
#include"../ServiceConfig.h"
#include"../Operations/Operation.h"
#include"OperationFactories/OperationFactories.h"
#include "OperationFactories/ValidationOperationFactory/ValidationOperationFactory.h"
#include "OperationFactories/LogOperationFactory/LogOperationFactory.h"
#include "OperationFactories/NetworkOperationFactory/NetworkOperationFactory.h"
#include "OperationFactories/RequestConfigurationOperationFactory/RequestConfigurationOperationFactory.h"
#include "OperationFactories/DeserializationOperationFactory/DeserializationOperationFactory.h"
#include "OperationFactories/SerializationOperationFactory/SerializationOperationFactory.h"
#include "../ServiceConfig.h"

using namespace std;

template<typename T>
class ServiceOperatoinBuilder
{
public:
	vector <OperationFactories*> operationFactories;
	vector <Operation*> obtainOperations(ServiceConfig* config);
	ServiceOperatoinBuilder()
	{
		operationFactories.push_back(new SerializationOperationFactory<T>);
		operationFactories.push_back(new RequestConfigurationOperationFactory);
		operationFactories.push_back(new NetworkOperationFactory);
		operationFactories.push_back(new LogOperationFactory);
		operationFactories.push_back(new ValidationOperationFactory);
		operationFactories.push_back(new DeserializationOperationFactory);
	}
};

#include "ServiceOperatoinBuilder.cpp"

#endif
