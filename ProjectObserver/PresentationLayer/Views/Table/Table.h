#pragma once
#ifndef _T_H_
#define _T_H_

#include <iostream>
#include <vector>
#include "../View/View.h"
#include "../Cell/Cell.h"

class Table : public View
{
public:
	Table(
	) 
	{
	}
	vector <Cell*> cells;
	string getDescription();
};

#endif