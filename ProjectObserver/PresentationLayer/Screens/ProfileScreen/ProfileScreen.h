#ifndef _PS_H_
#define _PS_H_

#include <iostream>
#include <string>
#include <vector>
#include "../../Views/Button/Button.h"
#include "../../Views/Label/Label.h"
#include "../../Views/Table/Table.h"
#include "../Screen/Screen.h"
#include "../../Localization/Localizable/Localizable.h"

using namespace std;

class ProfileScreen : public Screen
{
public:
	ProfileScreen(string surname, string name, string patronymic, string years, string status);
	~ProfileScreen();
	string getDescription();
	void localize(Language) override;
};

#endif