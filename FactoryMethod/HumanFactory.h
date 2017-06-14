/*
 * HumanFactory.h
 *
 *  Created on: Jan 20, 2015
 *      Author: lcong
 */

#ifndef HUMANFACTORY_H
#define HUMANFACTORY_H

class Human;

class CHumanFactory
{

public:
	CHumanFactory(void)
	{
	}
	;
	virtual ~CHumanFactory(void)
	{
	}
	;
	virtual Human * CreateHuman()=0;
protected:
private:
};

class CYelloHumanFactory: public CHumanFactory
{
public:
	CYelloHumanFactory(void);
	~CYelloHumanFactory(void);
	virtual Human * CreateHuman();
protected:
private:

};

class CWhiteHumanFactory: public CHumanFactory
{
public:
	CWhiteHumanFactory(void);
	~CWhiteHumanFactory(void);
	virtual Human * CreateHuman();
protected:
private:

};

class CBlackHumanFactory: public CHumanFactory
{
public:
	CBlackHumanFactory(void);
	~CBlackHumanFactory(void);
	virtual Human * CreateHuman();
protected:
private:

};

#endif
