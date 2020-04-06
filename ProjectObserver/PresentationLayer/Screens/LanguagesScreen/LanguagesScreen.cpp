#include <string>
#include <vector>
#include "LanguagesScreen.h"

LanguagesScreen::LanguagesScreen()
{
	vector <string> languages;
	languages.push_back("Russian");
	languages.push_back("English");
	languages.push_back("Chinese");
	languages.push_back("Armenian");

	screenTable = new Table("Langeages");

	for (string lang : languages)
	{
		Cell* cell = new Cell(lang);
		cell->buttons.push_back(new Button("Select"));
		screenTable->cells.push_back(cell);
	
	}
}

string LanguagesScreen::getDescription()
{
	return "LanguagesScreen\n" + Screen::getDescription();;
}
