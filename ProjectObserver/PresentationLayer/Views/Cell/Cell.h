#pragma once
#ifndef _C_H_
#define _C_H_

#include <iostream>
#include <vector>
#include <string>
#include "../View/View.h"
#include "../Button/Button.h"
#include "../Label/Label.h"

class Cell : public View
{
public:
	Cell()
	{
	}
	vector <Button*> buttons;
	vector <Label*> labels;
	string getDescription();
};

#endif