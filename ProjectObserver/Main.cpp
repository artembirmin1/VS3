#include <iostream>
#include <string>
#include <vector>
#include "PresentationLayer/Views/View/View.h"
#include "PresentationLayer/Views/Button/Button.h"
#include "PresentationLayer/Screens/Screen/Screen.h"
#include "PresentationLayer/Screens/ProfileScreen/ProfileScreen.h"
#include "PresentationLayer/Screens/LanguagesScreen/LanguagesScreen.h"
#include "PresentationLayer/Screens/SettingsScreen/SettingsScreen.h"
#include "PresentationLayer/Localization/Localizable/Localizable.h"
#include "PresentationLayer/Localization/Localizer/Localizer.h"

using namespace std;

int main()
{
	Language lang = Language::English;
	setlocale(LC_ALL, "Russian");
	Localizer* localizer = Localizer::getInstance();
	ProfileScreen* profile = new ProfileScreen("Ivanov", "Ivan", "Ivanovich", "365", "Professional criminal");
	cout << profile->getDescription() << endl<<endl;

	LanguagesScreen* languages = new LanguagesScreen;
	cout << languages->getDescription() << endl << endl;

	SettingsScreen* settings = new SettingsScreen;
	cout << settings->getDescription() << endl << endl;

	localizer->setLanguage(lang);
	delete profile;
	//cout << profile->getDescription() << endl << endl;

	cout << languages->getDescription() << endl << endl;

	cout << settings->getDescription() << endl << endl;
	
}