#pragma once
#ifndef _BUFFER_H_
#define _BUFFER_H_

#include<iostream>

using namespace std;

template <typename T>
class Buffer
{
public:
	T data;
	Buffer()
	{
	}
	void setData(T info)
	{
		data = info;
	}
};

#include "Buffer.cpp"

#endif