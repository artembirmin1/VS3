
#include <iostream>
#include <string>
#include <vector>
#include "../../Views/Button/Button.h"
#include "../../Views/Label/Label.h"
#include "../../Views/Table/Table.h"
#include "../Screen/Screen.h"

using namespace std;

class ProfileScreen : Screen
{
public:
	ProfileScreen(string surname, string name, string patronymic, string years, string status);
	string getDescription();
};
