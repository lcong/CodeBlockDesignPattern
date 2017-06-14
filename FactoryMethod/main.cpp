/*
 * Main.cpp
 *
 *  Created on: Jan 20, 2015
 *      Author: lcong
 */

#include "HumanFactory.h"
#include "Human.h""
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char* argv[])
{

	cout << "----------工厂方法----------" << endl;

	CHumanFactory *pHumanFactory = new CYelloHumanFactory();
	Human *pHuman = pHumanFactory->CreateHuman();
	pHuman->Cry();
	pHuman->Laugh();
	pHuman->Talk();

	delete pHuman,pHumanFactory;

	pHumanFactory = new CWhiteHumanFactory();

	pHuman = pHumanFactory->CreateHuman();

	pHuman->Cry();
	pHuman->Laugh();
	pHuman->Talk();

	delete pHuman,pHumanFactory;

	pHumanFactory = new CBlackHumanFactory();

	pHuman = pHumanFactory->CreateHuman();

	pHuman->Cry();
	pHuman->Laugh();
	pHuman->Talk();


	delete pHuman,pHumanFactory;

	return 0;

}
