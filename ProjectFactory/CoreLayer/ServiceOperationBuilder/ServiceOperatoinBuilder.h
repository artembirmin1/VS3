#pragma once
#ifndef _SOB_H_
#define _SOB_H_

#include <iostream> 
#include <vector>
#include"../ServiceConfig.h"
#include"../Operations/Operation.h"
#include"OperationFactory/OperationFactory.h"
#include "OperationFactory/ValidationOperationFactory/ValidationOperationFactory.h"
#include "OperationFactory/LogOperationFactory/LogOperationFactory.h"
#include "OperationFactory/NetworkOperationFactory/NetworkOperationFactory.h"
#include "OperationFactory/RequestConfigurationOperationFactory/RequestConfigurationOperationFactory.h"
#include "../ServiceConfig.h"
#include "OperationFactory/DeserializationOperationFactory/DeserializationOperationFactory.h"
#include "OperationFactory/SerializationOperationFactory/SerializationOperationFactory.h"

using namespace std;

template<typename T>
class ServiceOperatoinBuilder
{
public:
	vector <OperationFactory*> operationFactories;
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
