#include "Screen.h"
#include <iostream>
#include <string>
#include <vector>
#include "../../Views/Button/Button.h"
#include "../../Views/Label/Label.h"
#include "../../Views/Table/Table.h"
#include "../../Views/Cell/Cell.h"
#include "../../Views/View/View.h"

using namespace std;

string Screen::getDescription()
{
	string str;
	setlocale(LC_ALL, "Russian");
	if (screenTable != NULL)
	{
		int i = 0;
		str= screenTable->getDescription() +"\n";
		for (Cell* cell : screenTable->cells)
		{
			str += "-----------------------------------------------------\n";
			str+= cell->getDescription()+"\n";
			if (!cell->labels.empty())
			{
				for (Label* label : cell->labels)
				{
					str += label->getDescription() + "\n";
				}
			}
			if (!cell->buttons.empty())
			{
				
				for (Button* button : cell->buttons)
				{
					str += button->getDescription() + "\n";
				}
			}
			str += "-----------------------------------------------------\n";
		}
	}
	if (!screenButtons.empty())
	{
		str += "Buttons:\n";
		for (Button* butt : screenButtons)
			str += butt->getDescription() + "\n";
	}
	if (!screenLabels.empty())
	{	
		str += "Labels:\n";
		for (Button* lab : screenButtons)
			str += lab->getDescription() + "\n";
	}
	return str;
}
