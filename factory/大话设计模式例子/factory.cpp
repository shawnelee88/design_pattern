/*
 * factory.cpp
 *
 *  Created on: 2015年4月16日
 *      Author: lee
 */



#include "factory.h"
#include <string>
#include <iostream>

using namespace std;
Operation* OperationFactory::createOperation(string operate)
{
	Operation *op = NULL;
	if(operate == "+")
	{
		op = new OperationAdd;
	}
	else if(operate == "-")
	{
		op = new OperationSub;
	}
	else if(operate == "*")
	{
		op = new OperationMul;
	}
	else if(operate == "/")
	{
		op = new OperationDiv;
	}
	return op;
}
