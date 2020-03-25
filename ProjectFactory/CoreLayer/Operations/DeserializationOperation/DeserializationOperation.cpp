
#include <iostream> 
#include"DeserializationOperation.h"
#include <string>

using namespace std;

void DeserializationOperation::execute() 
{
	for (string c : deserializationOperationData)
	{
		cout << c;
	}
}