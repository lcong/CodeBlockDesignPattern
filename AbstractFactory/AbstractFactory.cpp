//============================================================================
// Name        : AbstractFactory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "AbstractFactory.h"
#include "Product.h"
#include <iostream>
using namespace std;
AbstractFactory::AbstractFactory()
{

}
AbstractFactory::~AbstractFactory()
{
}
ConcreteFactoryMilk::ConcreteFactoryMilk()
{
}
ConcreteFactoryMilk::~ConcreteFactoryMilk()
{
}
AbstractProductA* ConcreteFactoryMilk::CreateProductA()
{
	return new ProductA1();
}
AbstractProductB* ConcreteFactoryMilk::CreateProductB()
{
	return new ProductB1();
}
ConcreteFactoryFruit::ConcreteFactoryFruit()
{
}
ConcreteFactoryFruit::~ConcreteFactoryFruit()
{
}
AbstractProductA* ConcreteFactoryFruit::CreateProductA()
{
	return new ProductA2();
}
AbstractProductB* ConcreteFactoryFruit::CreateProductB()
{
	return new ProductB2();
}
