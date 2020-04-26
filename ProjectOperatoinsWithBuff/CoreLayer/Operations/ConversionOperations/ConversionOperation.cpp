#pragma once
#ifndef _CO_CPP_
#define _CO_CPP_

#include <iostream>
#include <string>
#include <vector>
#include "ConversionOperation.h"

using namespace std;

double ConversionOperation::translation(string str)
{
	double number = 0;
	double fraction = 0;
	double ten = 10;
	for (char ch : str)
	{
		if (ch == '.')
		{
			str.erase(0, str.find_first_of('.') + 1);
			for (char ch : str)
			{
				fraction += (static_cast<double>(ch) - 48) / ten;
				ten *= 10;
			}
			break;
		}
		number += static_cast<double>(ch) - 48;
		number *= 10;
	}
	number /= 10;
	number += fraction;
	return number;
}


void ConversionOperation::execute()
{
	string strInput = input->data;
	vector<double> vect;
	string str;
	int flag = 0;
	for (char ch : strInput)
	{
		if (((ch >= '0' && ch <= '9') || ch == '.') && flag <2)
		{
			if (ch == '.')
				flag++;
			str += ch;
		}
		else if (!str.empty())
		{
			flag = 0;
			vect.push_back(translation(str));
			str.clear();
		}
	}
	if (strInput.back() >= '0' && strInput.back() <= '9')
	{
		vect.push_back(translation(str));
		str.clear();
	}
	output->data = vect;
}

#endif