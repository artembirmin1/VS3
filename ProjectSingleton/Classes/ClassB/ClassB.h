#pragma once
#ifndef _CB_H_
#define _CB_H_

#include <iostream>
#include "../../Singleton/Singleton.h"

using namespace std;

class ClassB
{
	Singleton* itemB;
public:
	ClassB(Singleton* item) : itemB(item)
	{
	}
	int getValueB();
};

#endif