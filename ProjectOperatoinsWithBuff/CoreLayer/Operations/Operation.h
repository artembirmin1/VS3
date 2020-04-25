#pragma once
#ifndef _OPERATION2_H_
#define _OPERATION2_H_

#include <iostream>
#include <vector>
#include "../Buffer/Buffer.h"

using namespace std;

class Operation
{
public:
   virtual void  execute()=0;
};

#endif