/*
 * Operation.h
 *
 *  Created on: 2015年4月16日
 *      Author: lee
 */

#ifndef OPERATION_H_
#define OPERATION_H_

#include <string>

class Operation
{
public:
	Operation():numberA(0), numberB(0){}
	virtual ~Operation(){}
	virtual double GetResult();
	void setNumberA(double var){numberA = var;};
	void setNumberB(double var){numberB = var;};
	double getNumberA(){return numberA;};
	double getNumberB(){return numberB;};
protected:
	double numberA;
	double numberB;
private:
};

class OperationAdd:public Operation
{
	double GetResult();
};

class OperationSub:public Operation
{
	double GetResult();
};

class OperationMul:public Operation
{
	double GetResult();
};

class OperationDiv:public Operation
{
	double GetResult();
};
#endif /* OPERATION_H_ */
