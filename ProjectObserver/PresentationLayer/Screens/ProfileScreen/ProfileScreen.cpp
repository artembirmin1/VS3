#include <iostream>
#include <string>
#include <vector>
#include "ProfileScreen.h"
#include "../../Localization/Localizable/Localizable.h"
#include "../../Localization/Localizer/Localizer.h"

using namespace std;

ProfileScreen::ProfileScreen(string surname, string name, string patronymic, string years, string status)
{
	screenTable = new Table();//"Ivan's profile"

	Cell* nameCell = new Cell();//"Name"
	nameCell->labels.push_back(new Label());//name
	nameCell->labels[0]->title = name;
	nameCell->buttons.push_back(new Button());//"Change"
	screenTable->cells.push_back(nameCell);

	Cell* surnameCell = new Cell(); //"Surname"
	surnameCell->labels.push_back(new Label());//surname
	surnameCell->labels[0]->title = surname;
	surnameCell->buttons.push_back(new Button());//"Change"
	screenTable->cells.push_back(surnameCell);

	Cell* patronymicCell = new Cell();//"Patronymic"
	patronymicCell->labels.push_back(new Label());//patronymic
	patronymicCell->labels[0]->title = patronymic;
	patronymicCell->buttons.push_back(new Button());//"Change"
	screenTable->cells.push_back(patronymicCell);

	Cell* ageCell = new Cell();//"Age"
	ageCell->labels.push_back(new Label());//years
	ageCell->labels[0]->title = years;
	ageCell->buttons.push_back(new Button());//"Change"
	screenTable->cells.push_back(ageCell);

	Cell* statusCell = new Cell();//"Status"
	statusCell->labels.push_back(new Label());//status
	statusCell->labels[0]->title = status;
	statusCell->buttons.push_back(new Button());//"Change"
	screenTable->cells.push_back(statusCell);

	screenButtons.push_back(new Button());//"Exit"
	screenButtons.push_back(new Button());//"Settigs"
	this->localizer->subscribe(this);
}

ProfileScreen::~ProfileScreen()
{
	this->localizer->unsubscribe(this);
}

void ProfileScreen::localize(Language lang) 
{
	switch (lang)
	{
	case Language::English:
		screenTable->title = screenTable->cells[0]->labels[0]->title + "'s profile";
		screenTable->cells[0]->title = "Name";
		screenTable->cells[0]->buttons[0]->title = "Change";
		screenTable->cells[1]->title = "Surname";
		screenTable->cells[1]->buttons[0]->title = "Change";
		screenTable->cells[2]->title = "Patronymic";
		screenTable->cells[2]->buttons[0]->title = "Change";
		screenTable->cells[3]->title = "Age";
		screenTable->cells[3]->buttons[0]->title = "Change";
		screenTable->cells[4]->title = "Status";
		screenTable->cells[4]->buttons[0]->title = "Change";
		screenButtons[0]->title = "Exit";
		screenButtons[1]->title = "Settigs";
		break;
	case Language::Russian:
		screenTable->title = "Профиль пользователя " + screenTable->cells[0]->labels[0]->title;
		screenTable->cells[0]->title = "Имя";
		screenTable->cells[0]->buttons[0]->title = "Изменить";
		screenTable->cells[1]->title = "Фамилия";
		screenTable->cells[1]->buttons[0]->title = "Изменить";
		screenTable->cells[2]->title = "Отчество";
		screenTable->cells[2]->buttons[0]->title = "Изменить";
		screenTable->cells[3]->title = "Возраст";
		screenTable->cells[3]->buttons[0]->title = "Изменить";
		screenTable->cells[4]->title = "Статус";
		screenTable->cells[4]->buttons[0]->title = "Изменить";
		screenButtons[0]->title = "Выход";
		screenButtons[1]->title = "Настройки";
		break;

	}
}

string ProfileScreen::getDescription()
{
	return "ProfileScreen\n" + Screen::getDescription();
}


