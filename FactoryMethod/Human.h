/*
 * Human.h
 *
 *  Created on: Sep 19, 2014
 *      Author: lcong
 */

#ifndef HUMAN_H_
#define HUMAN_H_

class Human
{
public:
	Human(void)
	{
	}
	virtual ~Human(void)
	{
	}
	virtual void Laugh() = 0;
	virtual void Cry() = 0;
	virtual void Talk() = 0;
};

class CYellowHuman: public Human
{
public:
	CYellowHuman(void)
	{
	}
	;
	~CYellowHuman(void)
	{
	}
	;
	void Laugh();
	void Cry();
	void Talk();
};

class CWhiteHuman: public Human
{
public:
	CWhiteHuman(void)
	{
	}
	;
	~CWhiteHuman(void)
	{
	}
	;
	void Laugh();
	void Cry();
	void Talk();
};

class CBlackHuman: public Human
{
public:
	CBlackHuman(void)
	{
	}
	;
	~CBlackHuman(void)
	{
	}
	;
	void Laugh();
	void Cry();
	void Talk();
};

#endif /* HUMAN_H */

