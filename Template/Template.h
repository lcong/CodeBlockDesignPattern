/*
 * Template.h
 *
 *  Created on: Aug 28, 2014
 *      Author: lcong
 */

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

class AbstractClass
{
public:
	AbstractClass();
	virtual ~AbstractClass();
	void TemplateMethod();
protected:
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};

class ConcreteClass1: public AbstractClass
{
public:
	ConcreteClass1();
	~ConcreteClass1();
protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
private:
};

class ConcreteClass2: public AbstractClass
{
public:
	ConcreteClass2();
	~ConcreteClass2();
protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
private:
};

#endif /* TEMPLATE_H_ */
