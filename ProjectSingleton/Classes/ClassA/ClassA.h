#pragma once
#ifndef _CA_H_
#define _CA_H_

#include <iostream>
#include "../../Singleton/Singleton.h"

using namespace std;

class ClassA
{
	Singleton* itemA;
public:
	ClassA(Singleton* item) : itemA(item)
	{
	}
	int getValueA();
};

#endif