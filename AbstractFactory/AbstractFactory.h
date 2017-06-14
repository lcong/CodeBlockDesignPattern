/*
 * AbstractFactory.h
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#ifndef _ABSTRACTFACTORY_H_
#define _ABSTRACTFACTORY_H_

class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
	virtual ~AbstractFactory();
	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductB* CreateProductB() = 0;
protected:
	AbstractFactory();
private:
};

class ConcreteFactoryMilk: public AbstractFactory
{
public:
	ConcreteFactoryMilk();
	~ConcreteFactoryMilk();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
protected:
private:
};

class ConcreteFactoryFruit: public AbstractFactory
{
public:
	ConcreteFactoryFruit();
	~ConcreteFactoryFruit();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
protected:
private:
};

#endif /* ABSTRACTFACTORY_H_ */
