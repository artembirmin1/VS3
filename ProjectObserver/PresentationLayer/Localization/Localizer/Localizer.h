#pragma once
#ifndef _LOCALIZER_H_
#define _LOCALIZER_H_

#include<iostream>
#include <vector>
#include <string>

using namespace std;

class Localizable;

enum class Language
{
	English,
	Russian
};

class Localizer
{
private:
	static Localizer* singleLocalizer;
	Localizer()
	{
	}
public:
	Localizer(const Localizer&) = delete;
	Localizer& operator=(Localizer&) = delete;
	static Localizer* getInstance();

	Language currentLanguage = Language::Russian;
	vector <Localizable*> localizables;
	void setLanguage(Language lang);
	void subscribe(Localizable*);
	void unsubscribe(Localizable*);
};



//vector <Localizable*> Localizer::Localizables = { NULL };
#endif