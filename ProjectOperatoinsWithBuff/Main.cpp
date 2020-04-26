
#include <iostream>
#include <vector>
#include <string>
#include "CoreLayer/Operations/GenericOperation/GenericOperation.h"
#include "CoreLayer/Operations/GenericOperation/GenericOperation.h"
#include "CoreLayer/ServiceOperationBuilder/ServiceOperationBuilder.h"
#include "CoreLayer/Operations/Operation.h"
#include "CoreLayer/Buffer/Buffer.h"
#include "CoreLayer/Operations/ConversionOperations/ConversionOperation.h"
#include "CoreLayer/Operations/SquaringOperation/SquaringOperation.h"
#include <limits>

using namespace std;

int main()
{
	typedef std::numeric_limits< double > dbl;
	cout.precision(10);
	ServiceOperationBuilder* SOB = new ServiceOperationBuilder;
	vector<Operation*> operations = SOB->obtainOperations("2 ghbug 4.2");

	for (Operation* operation : operations)
	{
		operation->execute();
	}

	

	/*Buffer<string>* input = new Buffer<string>();
	input->data = "34";
	Buffer<vector<double>>* output = new Buffer<vector<double>>();
	ConversionOperation* converOp = new ConversionOperation;
	SquaringOperation* sqrOp = new SquaringOperation;

	converOp->input = input;
	converOp->output = output;
	sqrOp->input = output;

	Buffer<vector<double>>* output2 = new Buffer<vector<double>>();
	sqrOp->output = output2;

	converOp->execute();
	sqrOp->execute();


	vector<double> vect = sqrOp->output->data;

	for (double a : vect)
	{
		cout << a << " ";
	}*/
}