#pragma once
#ifndef _OPERATION_H_
#define _OPERATION_H_

#include <iostream> 
#include <vector>

using namespace std;

class Operation
{
public:
   virtual void  execute()=0;
};

#endif