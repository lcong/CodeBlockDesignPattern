/*
 * Strategy.h

 *
 *  Created on: Aug 28, 2014
 *      Author: lcong
 */

#ifndef STRATEGY_H_
#define STRATEGY_H_
#include <string>
using std::string;

class Strategy
{
public:
	Strategy();
	virtual ~Strategy();
	virtual void AlgrithmInterface() = 0;
protected:
private:
};
class ConcreteStrategyNsn: public Strategy
{
public:
	ConcreteStrategyNsn();
	virtual ~ConcreteStrategyNsn();
	void AlgrithmInterface();
protected:
private:
};
class ConcreteStrategyCoriant: public Strategy
{
public:
	ConcreteStrategyCoriant();
	virtual ~ConcreteStrategyCoriant();
	void AlgrithmInterface();
protected:
private:
};

class Strategy;
/**
 *这个类是Strategy模式的关键， 也是Strategy
 模式和Template模式的根本区别所在。
 *Strategy 通过“组合” （委托）方式实现算法
 （实现）的异构，而 Template 模式则采取的
 是继承的方式
 *这两个模式的区别也是继承和组合两种实
 现接口重用的方式的区别
 */
class Context
{
public:

	Context(string type);
	Context(Strategy* stg);
	~Context();

	void DoAction();
protected:

private:
	Strategy* _stg;

};

#endif /* STRATEGY_H_ */
