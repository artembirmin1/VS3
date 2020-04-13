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

	screenTable = new Table();//"Langeages"

	for (string lang : languages)
	{
		Cell* langCell = new Cell();//lang
		langCell->title = lang;
		langCell->buttons.push_back(new Button());//"Select"
		screenTable->cells.push_back(langCell);
	}
	screenButtons.push_back(new Button());//"Exit"

	this->localizer->subscribe(this);
}

LanguagesScreen::~LanguagesScreen()
{
	this->localizer->unsubscribe(this);
}

void LanguagesScreen::localize(Language lang)
{
	switch (lang)
	{
	case Language::English:
		screenTable->title = "Langeages";
		screenTable->cells[0]->buttons[0]->title = "Select";
		screenTable->cells[1]->buttons[0]->title = "Select";
		screenTable->cells[2]->buttons[0]->title = "Select";
		screenTable->cells[3]->buttons[0]->title = "Select";
		screenButtons[0]->title = "Exit";
		break;
	case Language::Russian:
		screenTable->title = "Языки";
		screenTable->cells[0]->buttons[0]->title = "Выбрать";
		screenTable->cells[1]->buttons[0]->title = "Выбрать";
		screenTable->cells[2]->buttons[0]->title = "Выбрать";
		screenTable->cells[3]->buttons[0]->title = "Выбрать";
		screenButtons[0]->title = "Выход";
		break;

	}
}

string LanguagesScreen::getDescription()
{
	return "LanguagesScreen\n" + Screen::getDescription();;
}
