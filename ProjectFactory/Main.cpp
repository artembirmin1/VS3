
#include <iostream> 
#include <vector>
#include"CoreLayer/ServiceOperationBuilder/ServiceOperatoinBuilder.h"
#include"CoreLayer/Operations/DeserializationOperation/DeserializationOperation.h"
#include"CoreLayer/Operations/LogOperation/LogOperation.h"
#include"CoreLayer/Operations/NetworkOperation/NetworkOperation.h"
#include"CoreLayer/Operations/ValidationOperation/ValidationOperation.h"
#include"CoreLayer/Operations/RequestConfigurationOperation/RequestConfigurationOperation.h"
#include "CoreLayer/Operations/SerializationOperation/SerializationOperation.h"

using namespace std;

vector <Operation*> obtainOperations()
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

int main()
{
	ServiceOperatoinBuilder* b = new ServiceOperatoinBuilder;
	vector <Operation*> a = b->obtainOperations();
	a = obtainOperations();
	for (Operation* c : a)
	{
		c->execute();
		cout << " ";
	}
}

