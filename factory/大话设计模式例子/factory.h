/*
 * factory.h
 *
 *  Created on: 2015年4月16日
 *      Author: lee
 */

#ifndef FACTORY_H_
#define FACTORY_H_

#include <string>
#include "operation.h"

class OperationFactory
{
public:
	static Operation* createOperation(std::string operate);
protected:
private:
};


#endif /* FACTORY_H_ */
