/*
 * Main.cpp
 *
 *  Created on: Aug 28, 2014
 *      Author: lcong
 */

#include "Strategy.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	Strategy* ps;
	Context* pc;

	ps = new ConcreteStrategyNsn();
	pc = new Context(ps);
	pc->DoAction();

	if (NULL != pc)
	{
		delete pc;
		pc = NULL;
	}

	ps = new ConcreteStrategyCoriant();
	pc = new Context(ps);
	pc->DoAction();

	if (NULL != pc)
	{
		delete pc;
		pc = NULL;
	}

	pc = new Context("Atype");
	pc->DoAction();
	if (NULL != pc)
	{
		delete pc;
		pc = NULL;
	}

	pc = new Context("Btype");
	pc->DoAction();

	if (NULL != pc)
	{
		delete pc;
		pc = NULL;
	}

	return 0;
}
