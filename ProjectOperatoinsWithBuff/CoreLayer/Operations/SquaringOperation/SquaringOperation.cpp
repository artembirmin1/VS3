#pragma once
#ifndef _SQRO_CPP_
#define _SQRO_CPP_

#include <iostream>
#include <string>
#include <vector>
#include "SquaringOperation.h"

using namespace std;

void SquaringOperation::execute()
{
	vector<double> vectorInput = input->data;
	for (int i = 0; i < vectorInput.size(); i++)
	{
		vectorInput[i] *= vectorInput[i];
	}
	output->data = vectorInput;
}

#endif