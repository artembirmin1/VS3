#pragma once
#ifndef _SOB_H_
#define _SOB_H_

#include<iostream>
#include<vector>
#include "Chainer/Chainer.h"
#include "../Operations/Operation.h"
#include "../Operations/GenericOperation/GenericOperation.h"
#include "../Operations/ConversionOperations/ConversionOperation.h"
#include "../Operations/SquaringOperation/SquaringOperation.h"
#include "../Operations/SummationOperation/SummationOperation.h"
#include "../Operations/OutputOperation/OutputOperation.h"

using namespace std;

class ServiceOperationBuilder
{
public:
	vector <Operation*> obtainOperations(string str);
};

#endif

