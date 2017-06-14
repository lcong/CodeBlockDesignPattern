/*
 * Product.h
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#ifndef _PRODUCT_H_
#define _PRODUCT_H_
class AbstractProductA
{
public:
	virtual ~AbstractProductA();
	virtual void Operation()=0;
protected:
	AbstractProductA();
private:
};
class AbstractProductB
{
public:
	virtual ~AbstractProductB();
	virtual void Operation()=0;
protected:
	AbstractProductB();

private:
};
class ProductA1: public AbstractProductA
{
public:
	ProductA1();
	~ProductA1();
	void Operation();
protected:

private:
};
class ProductA2: public AbstractProductA
{
public:
	ProductA2();
	~ProductA2();
protected:
	void Operation();
private:
};
class ProductB1: public AbstractProductB
{
public:
	ProductB1();
	~ProductB1();
protected:
	void Operation();
private:
};
class ProductB2: public AbstractProductB
{
public:
	ProductB2();
	~ProductB2();
protected:
	void Operation();
private:
};

#endif /* PRODUCT_H_ */
