#pragma once
#ifndef _SUMM_H_
#define _SUMM_H_

#include <iostream>
#include <string>
#include <vector>
#include "../GenericOperation/GenericOperation.h"
#include"../Operation.h"

using namespace std;

class SummationOperation : public GenericOperation<vector<double>, double>
{
public:
	void execute() override;
};

#endif