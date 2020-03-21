#pragma once
#ifndef _SOB_H_
#define _SOB_H_

#include <iostream> 
#include <vector>
#include"../Operations/Operation.h"

using namespace std;

class ServiceOperatoinBuilder
{
public:
	vector <Operation*> obtainOperations();
};

#endif
