#ifndef _SS_H_
#define _SS_H_


#include <iostream>
#include <string>
#include <vector>
#include "../../Views/Button/Button.h"
#include "../../Views/Label/Label.h"
#include "../../Views/Table/Table.h"
#include "../Screen/Screen.h"

using namespace std;

class SettingsScreen : public Screen
{
public:
	SettingsScreen();
	~SettingsScreen();
	string getDescription();
	void localize(Language) override;
};

#endif