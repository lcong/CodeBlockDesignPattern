//============================================================================
// Name        : Adaptor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Adapter.h"
#include <iostream>

using namespace std;

Target::Target()
{
}

Target::~Target()
{
}

Adaptee::Adaptee()
{
}

Adaptee::~Adaptee()
{
}

void Adaptee::SpecificRequest()
{
	cout << "Adaptee::SpecificRequest()" << endl;
}

//类模式的Adapter
Adapter0::Adapter0()
{
}

Adapter0::~Adapter0()
{
}

void Adapter0::Request()
{
	cout << "Adapter0::Request()" << endl;
	this->SpecificRequest();
	cout << "----------------------------" << endl;
}

//对象模式的Adapter
Adapter1::Adapter1() :
		_adaptee(new Adaptee)
{
}

Adapter1::Adapter1(Adaptee* adaptee)
{
	_adaptee = adaptee;
}

Adapter1::~Adapter1()
{
	if (NULL != _adaptee)
	{
		delete _adaptee;
		_adaptee = NULL;
	}
}

void Adapter1::Request()
{
	cout << "Adapter1::Request()" << endl;
	_adaptee->SpecificRequest();
	cout << "----------------------------" << endl;
}
