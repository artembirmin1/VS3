#pragma once
#ifndef _CO_H_
#define _CO_H_

#include <iostream>
#include <string>
#include <vector>
#include "../GenericOperation/GenericOperation.h"
#include"../Operation.h"

using namespace std;

class ConversionOperation : public GenericOperation<string, vector<double>>
{
public:
	double translation(string str);
	void execute() override;
};

#endif

