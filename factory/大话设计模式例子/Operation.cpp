/*
 * Operation.cpp
 *
 *  Created on: 2015年4月16日
 *      Author: lee
 */


#include "Operation.h"
#include <string>
using namespace std;

double Operation::GetResult()
{
	double result = 0;

	return result;
}

double OperationAdd::GetResult()
{
	double result = 0;
	result = getNumberA() + getNumberB();
	return result;
}


double OperationSub::GetResult()
{
	double result = 0;
	result = getNumberA() - getNumberB();
	return result;
}

double OperationMul::GetResult()
{
	double result = 0;
	result = getNumberA() * getNumberB();
	return result;
}

double OperationDiv::GetResult()
{
	double result = 0;
	result = getNumberA() / getNumberB();
	return result;
}
