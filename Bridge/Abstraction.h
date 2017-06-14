/*
 * Abstract.h

 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_

class AbstractionImplement;

class Abstraction
{
public:
	virtual void Operation()=0; //定义接口，表示该类所支持的操作
	virtual ~Abstraction();
protected:
	Abstraction();
};

class RefinedAbstraction: public Abstraction
{
public:
	RefinedAbstraction(AbstractionImplement* imp); //构造函数
	virtual void Operation(); //实现接口
	virtual ~RefinedAbstraction(); //析构函数
private:
	AbstractionImplement* _imp; //私有成员
};


#endif /* ABSTRACT_H_ */
