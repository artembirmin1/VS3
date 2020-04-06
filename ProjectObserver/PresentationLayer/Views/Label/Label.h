#ifndef _L_H_
#define _L_H_

#include <iostream>
#include <string>
#include "../View/View.h"

using namespace std;

class Label : public View
{
public:
	Label(string str) : View(str)
	{
	}
	string getDescription();
};

#endif