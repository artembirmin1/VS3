#pragma once
#ifndef _CHAINER_CPP_
#define _CHAINER_CPP_

#include "Chainer.h"

template <typename I, typename M, typename O>
void Chainer::chain(GenericOperation<I, M>* first, GenericOperation<M, O>* second)
{
	if (first->input == NULL)
	{
		first->input = new Buffer<I>;
	}
	if (first->output == NULL)
	{
		first->output = new Buffer<M>;
	}
	second->input = first->output;
	second->output = new Buffer<O>;
}

#endif