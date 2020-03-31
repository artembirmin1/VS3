#include <iostream>
#include "Singleton.h"

using namespace std;

Singleton* Singleton::getInstance()
{
	if (item == NULL)
	{
		item = new Singleton;
	}
	return item;
}

int Singleton::getValue()
{
	return value;
}

void Singleton::setValue(int a)
{
	value = a;
}

Singleton* Singleton::item = NULL;
