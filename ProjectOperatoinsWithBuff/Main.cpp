//
//#include <array>
//#include <iostream>
//#include <string_view>
//#include <tuple>
//#include <type_traits>
//
//using namespace std;
//
//namespace a::b::c
//{
//    inline constexpr std::string_view str{ "hello" };
//}
//
//template <class... T>
//std::tuple<std::size_t, std::common_type_t<T...>> sum(T... args)
//{
//    return { sizeof...(T), (args + ...) };
//}
//
//int main()
//{
//    auto [iNumbers, iSum] { sum(1, 2, 3) };
//    std::cout << a::b::c::str << ' ' << iNumbers << ' ' << iSum << '\n';
//
//    std::array arr{ 1, 2, 3 };
//
//    std::cout << std::size(arr) << '\n';
//
//    return 0;
//}

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
	

	if (__cplusplus == 201703L) std::cout << "C++17\n";
	else if (__cplusplus == 201402L) std::cout << "C++14\n";
	else if (__cplusplus == 201103L) std::cout << "C++11\n";
	else if (__cplusplus == 199711L) std::cout << "C++98\n";
	else std::cout << "pre-standard C++\n";

	/*ServiceOperationBuilder* SOB = new ServiceOperationBuilder;
	vector<Operation*> operations = SOB->obtainOperations("2 ghbug 4");

	for (Operation* operation : operations)
	{
		operation->execute();
	}*/
	

	

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