/*
 * Product.cpp
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#include "Product.h"
#include <iostream>
using namespace std;

AbstractProductA::AbstractProductA()
{
}

void AbstractProductA::Operation()
{
	cout << "AbstractProductA..." << endl;
}

AbstractProductA::~AbstractProductA()
{
}
AbstractProductB::AbstractProductB()
{
}
AbstractProductB::~AbstractProductB()
{
}

ProductA1::ProductA1()
{
	cout << "ProductA1..." << endl;
}

ProductA1::~ProductA1()
{
}

void ProductA1::Operation()
{
	cout << "ProductA1::Operation..." << endl;
}

ProductA2::ProductA2()
{
	cout << "ProductA2..." << endl;
}

void ProductA2::Operation()
{
	cout << "ProductA2::Operation..." << endl;
}

ProductA2::~ProductA2()
{
}

ProductB1::ProductB1()
{
	cout << "ProductB1..." << endl;
}

void ProductB1::Operation()
{

	cout << "ProductB1::Operation..." << endl;
}

ProductB1::~ProductB1()
{
}


ProductB2::ProductB2()
{
	cout << "ProductB2..." << endl;
}

void ProductB2::Operation()
{

	cout << "ProductB2::Operation..." << endl;
}


ProductB2::~ProductB2()
{
}
