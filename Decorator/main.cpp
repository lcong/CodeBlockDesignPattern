/*
 * Main.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: lcong
 */

#include "Decorator.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

    std::cout << "sequence 1 operation..." << std::endl;
    Bread* MyBread = new ConcreteBread();
    Decorator* d1 = new FruitDecorator(MyBread); //执行带参数的构造函数，
    Decorator* d2 = new MilkDecorator(d1);
    Decorator* d3 = new ChocolateDecorator(d2);

//	d1->DecorateBread(MyBread);
//	d2->DecorateBread(d1);
//	d3->DecorateBread(d2);

    d3->Operation();

    delete d3;

    std::cout << "sequence 2 operation..." << std::endl;
    MyBread = new ConcreteBread();
    d1 = new ChocolateDecorator();
    d1->Decorate(MyBread);
    d2 = new MilkDecorator();
    d2->Decorate(d1);
    d3 = new FruitDecorator();
    d3->Decorate(d2);

    d3->Operation();
    delete d3;


    return 0;
}
