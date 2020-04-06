#include "SettingsScreen.h"

SettingsScreen::SettingsScreen()
{
	screenTable = new Table("Settings");

	Cell* languagesCell = new Cell("Languages");
	
	languagesCell->buttons.push_back(new Button("Follow"));
	screenTable->cells.push_back(languagesCell);

	Cell* screenCell = new Cell("Screen");
	screenCell->buttons.push_back(new Button("Follow"));
	screenTable->cells.push_back(screenCell);

	Cell* securityCell = new Cell("Security");
	securityCell->buttons.push_back(new Button("Follow"));
	screenTable->cells.push_back(securityCell);

	screenButtons.push_back(new Button("Exit"));
}

string SettingsScreen::getDescription()
{
	return " SettingsScreen\n" + Screen::getDescription();
}
