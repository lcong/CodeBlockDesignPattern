//============================================================================
// Name        : Template.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Template.h"
#include <iostream>
using namespace std;
AbstractClass::AbstractClass()
{
}
AbstractClass::~AbstractClass()
{
}
void AbstractClass::TemplateMethod()
{
    cout << "Enter AbstractClass::TemplateMethod" << endl;
	this->PrimitiveOperation1();
	this->PrimitiveOperation2();
	cout << "Exit AbstractClass::TemplateMethod" << endl;

}

ConcreteClass1::ConcreteClass1()
{
}

ConcreteClass1::~ConcreteClass1()
{
}
void ConcreteClass1::PrimitiveOperation1()
{
	cout << "ConcreteClass1...PrimitiveOperation1" << endl;
}
void ConcreteClass1::PrimitiveOperation2()
{
	cout << "ConcreteClass1...PrimitiveOperation2" << endl;
}
ConcreteClass2::ConcreteClass2()
{
}
ConcreteClass2::~ConcreteClass2()
{
}
void ConcreteClass2::PrimitiveOperation1()
{
	cout << "ConcreteClass2...PrimitiveOperation1" << endl;
}
void ConcreteClass2::PrimitiveOperation2()
{
	cout << "ConcreteClass2...PrimitiveOperation2" << endl;
}
