/*
 * Decorator.h
 *
 *  Created on: Aug 29, 2014
 *      Author: lcong
 */

#ifndef DECORATOR_H_
#define DECORATOR_H_

class Bread
{
public:
    virtual ~Bread();
    virtual void Operation()=0;
protected:
    Bread();
private:
};

class ConcreteBread: public Bread
{
public:
    ConcreteBread();
    ~ConcreteBread();
    void Operation();
protected:
private:
};

class Decorator: public Bread
{
public:
    Decorator();
    Decorator(Bread* com);
    void Decorate(Bread* com);
    virtual ~Decorator();
    void Operation();
protected:
    Bread* _bread;

private:
};

class MilkDecorator: public Decorator
{
public:
    MilkDecorator(Bread* com);
    MilkDecorator();
    ~MilkDecorator();
    void Operation();
    void AddedBehavior();
protected:
private:
};

class FruitDecorator: public Decorator
{
public:
    FruitDecorator(Bread* com);
    FruitDecorator();
    ~FruitDecorator();
    void Operation();
    void AddedBehavior();
protected:
private:
};

class ChocolateDecorator: public Decorator
{
public:
    ChocolateDecorator(Bread* com);
    ChocolateDecorator();
    ~ChocolateDecorator();
    void Operation();
    void AddedBehavior();
protected:
private:
};

#endif /* DECORATOR_H_ */
