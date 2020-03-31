#pragma once
#ifndef _S_H_
#define _S_H_

#include <iostream>

using namespace std;

class Singleton
{
private:
	
	static Singleton* item;
	int value;

public:
	Singleton()
	{
	}
	int getValue();
	void setValue(int a);
	Singleton(const Singleton&) = delete;
	Singleton& operator=(Singleton&) = delete;
	static Singleton* getInstance();
};

#endif