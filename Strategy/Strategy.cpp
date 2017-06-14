/*
 * Strategy.cpp
 *
 *  Created on: Aug 28, 2014
 *      Author: lcong
 */

#include "Strategy.h"
#include <iostream>

#include <string>
using std::string;
using namespace std;

Strategy::Strategy()
{
}
Strategy::~Strategy()
{
	cout << "~Strategy....." << endl;
}

ConcreteStrategyNsn::ConcreteStrategyNsn()
{
}
ConcreteStrategyNsn::~ConcreteStrategyNsn()
{
	cout << "~ConcreteStrategyNsn....." << endl;
}
void ConcreteStrategyNsn::AlgrithmInterface()
{
	cout << "test ConcreteStrategyNsn....." << endl;
}
ConcreteStrategyCoriant::ConcreteStrategyCoriant()
{
}
ConcreteStrategyCoriant::~ConcreteStrategyCoriant()
{
	cout << "~ConcreteStrategyCoriant....." << endl;
}
void ConcreteStrategyCoriant::AlgrithmInterface()
{
	cout << "test ConcreteStrategyCoriant....." << endl;
}

Context::Context(string type)
{

	if (type == "Atype")
	{
		_stg = new ConcreteStrategyNsn();
	}
	else if (type == "Btype")
	{
		_stg = new ConcreteStrategyCoriant();
	}
	else
	{
		_stg = NULL;
	}

}

Context::Context(Strategy* stg)
{
	_stg = stg;

}

Context::~Context()
{
	if (_stg)
	{
		delete _stg;
		_stg = NULL;
	}
}

void Context::DoAction()
{
	_stg->AlgrithmInterface();
}

