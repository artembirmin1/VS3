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

class Chainer
{
public:
	template <typename I, typename M, typename O>
	void chain(GenericOperation<I,M>* first, GenericOperation<M,O>* second);
};

#include "Chainer.cpp"

#endif

