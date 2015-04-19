/*
 * main.cpp
 *
 *  Created on: 2015年4月16日
 *      Author: lee
 */

//《大话设计模式》中的例子,其思想与《gof23种设计模式》相关章节的“讨论”中得一个方法类似，
//就是“参数化工厂方法”，通过传递不同的参数创建不同类型的对象

#include "Operation.h"
#include "factory.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	Operation *op;
	op = OperationFactory::createOperation("+");
	op->setNumberA(6);
	op->setNumberB(3);
	double result = op->GetResult();
	cout << result << endl;
	return 0;
}
