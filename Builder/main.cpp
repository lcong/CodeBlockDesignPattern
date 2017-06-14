/*
 * Main.cpp
 *
 *  Created on: Aug 27, 2014
 *      Author: lcong
 */

#include "Builder.h"
#include "Product.h"
#include "Director.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	Director* d1 = new Director(new ConcreteMilkBuilder());

	d1->Construct();

	Product* p1 = d1->GetProduct();

	if (d1 != NULL)
	{
		delete d1;
		d1 = NULL;
	}
	if (p1 != NULL)
	{
		delete p1;
		p1 = NULL;
	}


	Director* d2 = new Director(new ConcreteFruitBuilder());

	d2->Construct();

	Product* p2 = d2->GetProduct();

	if (d2 != NULL)
	{
		delete d2;
		d2 = NULL;
	}
	if (p2 != NULL)
	{
		delete p2;
		p2 = NULL;
	}
	return 0;
}
