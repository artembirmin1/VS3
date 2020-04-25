#include "ServiceOperationBuilder.h"

using namespace std;

vector<Operation*> ServiceOperationBuilder::obtainOperations(string str)
{
	vector<Operation*> operations;




	//ConversionOperation* converOp = new ConversionOperation;
	//SquaringOperation* squarOper = new SquaringOperation;
	//SummationOperation* sumOper = new SummationOperation;
	//
	//Chainer<Operation>* chainer = new Chainer<Operation>;
	//chainer->chain(converOp, squarOper);




	/*Chainer<string, vector<double>>* chainer1 = new Chainer<string, vector<double>>;
	GenericOperation<string, vector<double>>* converOper = chainer1->chain(new ConversionOperation);
	converOper->input->data = str;
	operations.push_back(converOper);

	Chainer<vector<double>, vector<double>>* chainer2 = new Chainer<vector<double>, vector<double>>;
	GenericOperation<vector<double>, vector<double>>* sqearOper = chainer2->chain(new SquaringOperation, converOper->output);
	operations.push_back(sqearOper);

	Chainer<vector<double>, double>* chainer3 = new Chainer<vector<double>, double>;
	GenericOperation<vector<double>, double>* summOper = chainer3->chain(new SummationOperation, sqearOper->output);
	operations.push_back(summOper);*/

	return operations;
}
