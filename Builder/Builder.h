/*
 * Builder.h
 *
 *  Created on: Aug 27, 2014
 *      Author: lcong
 */

#ifndef BUILDER_H_
#define BUILDER_H_

#include <string>
using namespace std;
class Product;
class Builder
{
public:
	virtual ~Builder(){};
	virtual void BuildPartA(const string& buildPara) = 0;
	virtual void BuildPartB(const string& buildPara) = 0;
	virtual void BuildPartC(const string& buildPara) = 0;
	virtual Product* GetProduct() = 0;
protected:
	Builder(){};
private:
};
class ConcreteMilkBuilder: public Builder
{
public:
	ConcreteMilkBuilder();
	~ConcreteMilkBuilder();
	void BuildPartA(const string& buildPara);
	void BuildPartB(const string& buildPara);
	void BuildPartC(const string& buildPara);
	Product* GetProduct();
	Product*_product;
protected:
private:
};


class ConcreteFruitBuilder: public Builder
{
public:
	ConcreteFruitBuilder();
	~ConcreteFruitBuilder();
	void BuildPartA(const string& buildPara);
	void BuildPartB(const string& buildPara);
	void BuildPartC(const string& buildPara);
	Product* GetProduct();
	Product*_product;
protected:
private:
};

#endif /* BUILDER_H_ */
