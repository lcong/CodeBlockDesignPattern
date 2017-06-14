//============================================================================
// Name        : Builder.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Builder.h"
#include "Product.h"
#include <iostream>
using namespace std;


ConcreteMilkBuilder::ConcreteMilkBuilder()
{
    this->_product = new Product();

}
ConcreteMilkBuilder::~ConcreteMilkBuilder()
{
    if (this->_product)
    {
        delete _product;
        this->_product=NULL;
    }
}

void ConcreteMilkBuilder::BuildPartA(const string& buildPara)
{
    this->_product->AddPartA(buildPara);

}

void ConcreteMilkBuilder::BuildPartB(const string& buildPara)
{
    this->_product->AddPartB(buildPara);
}

void ConcreteMilkBuilder::BuildPartC(const string& buildPara)
{
    this->_product->AddPartC(buildPara);
}

Product* ConcreteMilkBuilder::GetProduct()
{
    return this->_product;
}



ConcreteFruitBuilder::ConcreteFruitBuilder()
{
    this->_product = new Product();

}
ConcreteFruitBuilder::~ConcreteFruitBuilder()
{
    if (this->_product)
    {
        delete _product;
        this->_product=NULL;
    }
}

void ConcreteFruitBuilder::BuildPartA(const string& buildPara)
{

    cout << "ConcreteFruitBuilder::BuildPartA" << buildPara << endl;

    this->_product->AddPartA(buildPara);

}

void ConcreteFruitBuilder::BuildPartB(const string& buildPara)
{
    cout << "ConcreteFruitBuilder::BuildPartB" << buildPara << endl;

    this->_product->AddPartB(buildPara);
}

void ConcreteFruitBuilder::BuildPartC(const string& buildPara)
{
    cout << "ConcreteFruitBuilder::BuildPartC" << buildPara << endl;

    this->_product->AddPartC(buildPara);
}

Product* ConcreteFruitBuilder::GetProduct()
{
    return this->_product;
}
