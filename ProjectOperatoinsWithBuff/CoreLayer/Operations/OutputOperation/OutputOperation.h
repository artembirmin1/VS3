#pragma once
#ifndef _OUT_H_
#define _OUT_H_

#include <iostream>
#include <string>
#include <vector>
#include "../GenericOperation/GenericOperation.h"
#include"../Operation.h"

using namespace std;

class OutputOperation : public GenericOperation<double, double>
{
public:
	void execute() override;
};

#endif