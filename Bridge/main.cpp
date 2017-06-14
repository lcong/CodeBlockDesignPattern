//============================================================================
// Name        : Main.cpp

// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Abstraction.h"
#include "AbstractImplement.h"
#include <iostream>

using namespace std;

int main()
{
	/* 将抽象部分与它的实现部分分离，使得它们可以独立地变化

	 1、抽象Abstraction与实现AbstractionImplement分离;
	 2、抽象部分Abstraction可以变化，如new RefinedAbstraction(imp);
	 3、实现部分AbstractionImplement也可以变化，如new ConcreteAbstractionImplementA()、new ConcreteAbstractionImplementNokia();
	 */

	AbstractionImplement* imp0 = new ConcreteAbstractionImplementNokia(); //实现部分ConcreteAbstractionImplementNokia
	Abstraction* abs0 = new RefinedAbstraction(imp0);   //抽象部分RefinedAbstractionA
	abs0->Operation();

	cout << "-----------------------------------------" << endl;

	AbstractionImplement* imp1 = new ConcreteAbstractionImplementDell(); //实现部分ConcreteAbstractionImplementDell
	Abstraction* abs1 = new RefinedAbstraction(imp1); //抽象部分RefinedAbstractionA
	abs1->Operation();

	cout << "-----------------------------------------" << endl;


	if(abs0) delete abs0;
	if(abs1) delete abs1;


	cout << endl;
	return 0;
}
