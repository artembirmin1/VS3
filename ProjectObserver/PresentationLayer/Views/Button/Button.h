
#ifndef _B_H_
#define _B_H_

#include <iostream>
#include <string>
#include "../View/View.h"

using namespace std;

class Button : public View
{
public:
	Button(string str) : View(str)
	{
	}
	string getDescription();
};

#endif