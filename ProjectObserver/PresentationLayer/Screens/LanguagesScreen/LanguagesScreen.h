
#include <iostream>
#include <string>
#include <vector>
#include "../../Views/Button/Button.h"
#include "../../Views/Label/Label.h"
#include "../../Views/Table/Table.h"
#include "../Screen/Screen.h"

using namespace std;

class LanguagesScreen : Screen
{
public:
	LanguagesScreen();
	string getDescription();
};
