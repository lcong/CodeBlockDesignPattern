/*
 * HumanFactory.cpp
 *
 *  Created on: Jan 22, 2015
 *      Author: lcong
 */

#include "HumanFactory.h"
#include "Human.h"

CBlackHumanFactory::CBlackHumanFactory(void)
{
}

CBlackHumanFactory::~CBlackHumanFactory(void)
{
}

Human *CBlackHumanFactory::CreateHuman()
{
	return new CBlackHuman();

}



CYelloHumanFactory::CYelloHumanFactory(void)
{
}

CYelloHumanFactory::~CYelloHumanFactory(void)
{
}
Human *CYelloHumanFactory::CreateHuman()
{
	return new CYellowHuman();

}




CWhiteHumanFactory::CWhiteHumanFactory(void)
{
}

CWhiteHumanFactory::~CWhiteHumanFactory(void)
{
}
Human *CWhiteHumanFactory::CreateHuman()
{
	return new CWhiteHuman();

}

