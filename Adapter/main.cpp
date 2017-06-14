/*
 * Main.cpp
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#include "Adapter.h"

int main()
{
	//类模式Adapter0
	Target* pTarget0 = new Adapter0();
	pTarget0->Request();
	delete pTarget0;

	//对象模式Adapter1
	Adaptee* ade = new Adaptee();
	Target* pTarget1 = new Adapter1(ade);
	pTarget1->Request();
	delete pTarget1;

	//对象模式Adapter2
	Target* pTarget2 = new Adapter1();
	pTarget2->Request();

	delete pTarget2;
	return 0;
}
