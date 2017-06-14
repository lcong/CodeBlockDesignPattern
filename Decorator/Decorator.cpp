//============================================================================
// Name        : Decorator.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Decorator.h"
#include <iostream>
Bread::Bread()
{
}
Bread::~Bread()
{
}
ConcreteBread::ConcreteBread()
{
}
ConcreteBread::~ConcreteBread()
{
}
void ConcreteBread::Operation()
{
	std::cout << "ConcreteComponent operation..." << std::endl;
}

Decorator::Decorator()
{
}

Decorator::Decorator(Bread* com)
{
	this->_bread = com;
}

void Decorator::Decorate(Bread* com)
{
	this->_bread = com;

}

Decorator::~Decorator()
{
	if (NULL != this->_bread)
	{
		delete this->_bread;
		this->_bread = NULL;
	}
}

void Decorator::Operation()
{
    if(this->_bread)
    {
        this->_bread->Operation();
    }
}


//ConcreteMilkDecorator
MilkDecorator::MilkDecorator()
{
}

MilkDecorator::MilkDecorator(Bread* com) :
		Decorator(com)
{
}

MilkDecorator::~MilkDecorator()
{

}
void MilkDecorator::AddedBehavior()
{
	std::cout << "ConcreteDecorator::Add Milk to Bread...." << std::endl;
}
void MilkDecorator::Operation()
{
	this->_bread->Operation();
	this->AddedBehavior();
}

//ConcreteFruitDecorator
FruitDecorator::FruitDecorator(Bread* com) :
		Decorator(com)
{
}
FruitDecorator::FruitDecorator()
{
}
FruitDecorator::~FruitDecorator()
{
}
void FruitDecorator::AddedBehavior()
{
	std::cout << "ConcreteDecorator::Add Fruit to Bread...." << std::endl;
}
void FruitDecorator::Operation()
{
	this->_bread->Operation();
	this->AddedBehavior();
}

ChocolateDecorator::ChocolateDecorator(Bread* com) :
		Decorator(com)
{
}


//ConcreteChocolateDecorator
ChocolateDecorator::ChocolateDecorator()
{
}

ChocolateDecorator::~ChocolateDecorator()
{
}
void ChocolateDecorator::AddedBehavior()
{
	std::cout << "ConcreteDecorator::Add Chocolate to Bread...." << std::endl;
}
void ChocolateDecorator::Operation()
{
	this->_bread->Operation();
	this->AddedBehavior();
}
