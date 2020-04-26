#pragma once
#ifndef _GENOP_CPP_
#define _GENOP_CPP_

#include <iostream>
#include "../../Buffer/Buffer.h"
#include "../Operation.h"

using namespace std;

template <typename I, typename O>
class GenericOperation : public Operation
{
public:
	Buffer<I>* input = NULL;
	Buffer<O>* output = NULL;
};

#endif