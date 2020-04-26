
#pragma once
#ifndef _SQRO_H_
#define _SQRO_H_

#include <iostream>
#include <string>
#include <vector>
#include "../GenericOperation/GenericOperation.h"
#include"../Operation.h"

using namespace std;

class SquaringOperation : public GenericOperation<vector<double>, vector<double>>
{
public:
	void execute() override;
};


#endif