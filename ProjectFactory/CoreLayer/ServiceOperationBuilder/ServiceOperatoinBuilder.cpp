
#include <iostream>
#include <vector>
#include"ServiceOperatoinBuilder.h"
#include"../Operations/Operation.h"
#include "../Operations/DeserializationOperation/DeserializationOperation.h"
#include"../Operations/DeserializationOperation/DeserializationOperation.h"
#include"../Operations/LogOperation/LogOperation.h"
#include"../Operations/NetworkOperation/NetworkOperation.h"
#include"../Operations/RequestConfigurationOperation/RequestConfigurationOperation.h"
#include"../Operations/SerializationOperation/SerializationOperation.h"
#include"../Operations/ValidationOperation/ValidationOperation.h"

using namespace std;

vector <Operation*> ServiceOperatoinBuilder::obtainOperations()
{
	vector <Operation*> operationsVector;
	operationsVector.push_back(new SerializationOperation);
	operationsVector.push_back(new RequestConfigurationOperation);
	operationsVector.push_back(new NetworkOperation);
	operationsVector.push_back(new LogOperation);
	operationsVector.push_back(new ValidationOperation);
	operationsVector.push_back(new DeserializationOperation);
	return operationsVector;
}
