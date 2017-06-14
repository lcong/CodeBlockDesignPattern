/*
 * Main.cpp
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

// 定义控制台应用程序的入口点。

#include "HumanFactory.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char* argv[])
{
	//简单工厂方法
	cout << "----------简单工厂方法----------" << endl;

	CHumanFactory *pHumanFactory = new CHumanFactory();

	Human *pHuman = pHumanFactory->CreateHuman(1);

	pHuman->Cry();
	pHuman->Laugh();
	pHuman->Talk();

	delete pHuman;

	pHuman = pHumanFactory->CreateHuman(2);

	pHuman->Cry();
	pHuman->Laugh();
	pHuman->Talk();

	delete pHuman;

	pHuman = pHumanFactory->CreateHuman(3);

	pHuman->Cry();
	pHuman->Laugh();
	pHuman->Talk();

	delete pHuman;

	delete pHumanFactory;

	return 0;
}
