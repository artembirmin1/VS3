#pragma once
#ifndef _LOCALIZER_H_
#define _LOCALIZER_H_

#include<iostream>
#include <vector>
#include <string>
#include "../../Views/View/View.h"

using namespace std;

class Localizable;

enum Language
{
	English,
	Russian
};

class Localizer
{
public:
	vector <Localizable*> Localizables;
	void setLanguage(Language lang);
	static void subscribe(Localizable*);
	static void unsubscribe(Localizable*);
};

#endif