/*
 * AbstractImplement.h
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#ifndef _ABSTRACTIONIMPLEMENT_H_
#define _ABSTRACTIONIMPLEMENT_H_

//抽象基类，定义了实现的接口
class AbstractionImplement
{
public:
	virtual void Operation()=0; //定义操作接口
	virtual ~AbstractionImplement();
protected:
	AbstractionImplement();
};

// 继承自AbstractionImplement,是AbstractionImplement的不同实现之一
class ConcreteAbstractionImplementNokia: public AbstractionImplement
{
public:
	ConcreteAbstractionImplementNokia();
	void Operation(); //实现操作
	~ConcreteAbstractionImplementNokia();
protected:
};

// 继承自AbstractionImplement,是AbstractionImplement的不同实现之一
class ConcreteAbstractionImplementDell: public AbstractionImplement
{
public:
	ConcreteAbstractionImplementDell();
	void Operation(); //实现操作
	~ConcreteAbstractionImplementDell();
protected:
};

#endif /* ABSTRACTIMPLEMENT_H_ */
