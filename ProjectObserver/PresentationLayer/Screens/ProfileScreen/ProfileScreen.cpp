#include <iostream>
#include <string>
#include <vector>
#include "ProfileScreen.h"

using namespace std;

ProfileScreen::ProfileScreen(string surname, string name, string patronymic, string years, string status)
{
	screenTable = new Table("Ivan's profile");

	Cell* nameCell = new Cell("Name");
	nameCell->labels.push_back(new Label(name));
	nameCell->buttons.push_back(new Button("Change"));
	screenTable->cells.push_back(nameCell);

	Cell* surnameCell = new Cell("Surname");
	surnameCell->labels.push_back(new Label(surname));
	surnameCell->buttons.push_back(new Button("Change"));
	screenTable->cells.push_back(surnameCell);

	Cell* patronymicCell = new Cell("Patronymic");
	patronymicCell->labels.push_back(new Label(patronymic));
	patronymicCell->buttons.push_back(new Button("Change"));
	screenTable->cells.push_back(patronymicCell);

	Cell* ageCell = new Cell("Age");
	ageCell->labels.push_back(new Label(years));
	ageCell->buttons.push_back(new Button("Change"));
	screenTable->cells.push_back(ageCell);

	Cell* statusCell = new Cell("Status");
	statusCell->labels.push_back(new Label(status));
	statusCell->buttons.push_back(new Button("Change"));
	screenTable->cells.push_back(statusCell);

	screenButtons.push_back(new Button("Exit"));
	screenButtons.push_back(new Button("Settigs"));
}

string ProfileScreen::getDescription()
{
	return "ProfileScreen\n" + Screen::getDescription();
}

