/*
 * HumanFactory.h
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#ifndef HUMANFACTORY_H_
#define HUMANFACTORY_H_

#include "Human.h"
class CHumanFactory
{
public:
	CHumanFactory(void)
	{
	};
	virtual ~CHumanFactory(void)
	{
	};
	virtual Human * CreateHuman(int HumanType);
};


#endif /* IHUMANFACTORY_H_ */
