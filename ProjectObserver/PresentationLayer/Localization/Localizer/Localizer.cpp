#include "Localizer.h"
#include "../Localizable/Localizable.h"

using namespace std;

Localizer* Localizer::singleLocalizer = NULL;

Localizer* Localizer::getInstance()
{
	if (singleLocalizer == NULL)
	{
		singleLocalizer = new Localizer;
	}
	return  singleLocalizer;
}

void Localizer::setLanguage(Language lang)
{
	Localizer* localizer = getInstance();
	for (Localizable* screen : localizer->localizables)
	{
		screen->localize(lang);
	}
}

void Localizer::subscribe(Localizable* item)
{
	Localizer* localizer = getInstance();
	localizer->localizables.push_back(item);
	item->localize(localizer->currentLanguage);
}

void Localizer::unsubscribe(Localizable* item)
{
	Localizer* localizer = getInstance();
	int i = 0;
	for (Localizable* screen : localizer->localizables)
	{
		if (item == screen)
			break;
		i++;
	}
	localizer->localizables.erase(localizer->localizables.begin() + i);
}
