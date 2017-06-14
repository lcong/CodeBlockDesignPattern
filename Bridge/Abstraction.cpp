/*
 * Abstract.cpp
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#include "Abstraction.h"
#include "AbstractImplement.h"
#include <iostream>

using namespace std;

Abstraction::Abstraction()
{
}

Abstraction::~Abstraction()
{
}

RefinedAbstraction::RefinedAbstraction(AbstractionImplement* imp)
{
	this->_imp = imp;
}

RefinedAbstraction::~RefinedAbstraction()
{
	if (NULL != this->_imp)
	{
		delete this->_imp;
		this->_imp = NULL;
	}
}

void RefinedAbstraction::Operation()
{
	cout << "RefinedAbstractionA::Operation" << endl;
	this->_imp->Operation();
}

