#pragma once
#ifndef _CHAINER_H_
#define _CHAINER_H_

#include <iostream> 
#include <vector>
#include "../../Operations/GenericOperation/GenericOperation.h"
#include "../../Operations/Operation.h"
#include "../../Buffer/Buffer.h"
#include "../../Operations/Operation.h"

using namespace std;

template <typename T>
class Chainer
{
public:
	void chain(T* first, T* second);
};

#include "Chainer.cpp"

#endif

