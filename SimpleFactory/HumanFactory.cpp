/*
 * WhiteHumanFactory.cpp
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#include "HumanFactory.h"
#include "Human.h"
Human * CHumanFactory::CreateHuman(int HumanType)
{
	switch (HumanType)
	{
	case 1:
		return new CWhiteHuman();
		break;
	case 2:
		return new CYellowHuman();
		break;
	case 3:
		return new CBlackHuman();
		break;
	default:
		return new CYellowHuman();
		break;
	}
	return 0;

}
