/*
 * AbstractImplement.cpp
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#include "AbstractImplement.h"
#include <iostream>

using namespace std;

AbstractionImplement::AbstractionImplement()
{
}

AbstractionImplement::~AbstractionImplement()
{
}

ConcreteAbstractionImplementNokia::ConcreteAbstractionImplementNokia()
{
}

ConcreteAbstractionImplementNokia::~ConcreteAbstractionImplementNokia()
{
}

void ConcreteAbstractionImplementNokia::Operation()
{
	cout << "ConcreteAbstractionImplementNokia Operation" << endl;
}

ConcreteAbstractionImplementDell::ConcreteAbstractionImplementDell()
{
}

ConcreteAbstractionImplementDell::~ConcreteAbstractionImplementDell()
{
}

void ConcreteAbstractionImplementDell::Operation()
{
	cout << "ConcreteAbstractionImplementDell Operation" << endl;
}
