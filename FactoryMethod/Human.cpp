/*
 * Factory.cpp
 *
 *  Created on: Sep 19, 2014
 *      Author: lcong
 */

#include <iostream>
using std::cout;
using std::endl;

#include "Human.h"

void CYellowHuman::Cry()
{
	cout << "黄色人种会哭" << endl;
}
void CYellowHuman::Laugh()
{
	cout << "黄色人种会大笑，幸福呀！" << endl;
}
void CYellowHuman::Talk()
{
	cout << "黄色人种会说话，一般说的都是双字节" << endl;
}

void CWhiteHuman::Cry()
{
	cout << "白色人种会哭" << endl;
}
void CWhiteHuman::Laugh()
{
	cout << "白色人种会大笑，侵略的笑声" << endl;
}
void CWhiteHuman::Talk()
{
	cout << "白色人种会说话，一般都是单字节" << endl;
}

void CBlackHuman::Cry()
{
	cout << "黑人会哭" << endl;
}
void CBlackHuman::Laugh()
{
	cout << "黑人会笑" << endl;
}
void CBlackHuman::Talk()
{
	cout << "黑人可以说话，一般人听不懂" << endl;
}
