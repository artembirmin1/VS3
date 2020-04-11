#pragma once
#ifndef _LOCALIZABLE_H_
#define _LOCALIZABLE_H_

#include<iostream>
#include <vector>
#include <string>
#include "../Localizer/Localizer.h"

using namespace std;

class Localizable
{
public:
	Localizer* localizer;
	virtual void localize(Language lang) = 0;
};

#endif