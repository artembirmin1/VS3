#ifndef _LS_H_
#define _LS_H_

#include <iostream>
#include <string>
#include <vector>
#include "../../Views/Button/Button.h"
#include "../../Views/Label/Label.h"
#include "../../Views/Table/Table.h"
#include "../Screen/Screen.h"

using namespace std;

class LanguagesScreen : public Screen
{
public:
	LanguagesScreen();
	~LanguagesScreen();
	string getDescription();
	void localize(Language) override;
};

#endif