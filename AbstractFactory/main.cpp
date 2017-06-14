/*
 * Main.cpp
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#include "AbstractFactory.h"

#include <iostream>

#include "Product.h"

using namespace std;
int main(int argc, char* argv[])
{
	AbstractFactory* cf1 = new ConcreteFactoryMilk();
	AbstractProductA* pA1 = cf1->CreateProductA();
	AbstractProductB* pB1 = cf1->CreateProductB();

	AbstractFactory* cf2 = new ConcreteFactoryFruit();
	AbstractProductA* pA2 = cf2->CreateProductA();
	AbstractProductB* pB2 = cf2->CreateProductB();

	pA1->Operation();
	pB1->Operation();
	pA2->Operation();
	pB2->Operation();

	if (cf1)
	{
		delete cf1;
		cf1 = NULL;
	}
	if (cf2)
	{
		delete cf2;
		cf1 = NULL;

	}

	delete pA1, pB1, pA2, pB2;
	return 0;
}
