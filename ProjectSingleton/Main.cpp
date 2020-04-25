#include <iostream>
#include "Singleton/Singleton.h"
#include "Classes/ClassA/ClassA.h"
#include "Classes/ClassB/ClassB.h"

using namespace std;

int main()
{
	Singleton* item = Singleton::getInstance();
	item->setValue(777);
	
	ClassA* itemA = new ClassA(item);
	ClassB* itemB = new ClassB(item);

	cout << item->getValue() << " ";
	cout << itemA->getValueA() << " ";
	cout << itemB->getValueB() << " ";
}