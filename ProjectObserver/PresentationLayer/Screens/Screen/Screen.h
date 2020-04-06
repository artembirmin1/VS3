#pragma once
#ifndef _S_H_
#define _S_H_

#include <iostream>
#include <string>
#include <vector>
#include "../../Views/Button/Button.h"
#include "../../Views/Label/Label.h"
#include "../../Views/Table/Table.h"

using namespace std;

class Screen
{
public:
	Table* screenTable = NULL;
	vector <Button*> screenButtons;
	vector <Label*> screenLabels;
	string getDescription();
};

#endif