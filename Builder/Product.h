/*
 * Product.h
 *
 *  Created on: Aug 27, 2014
 *      Author: lcong
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <iostream>
using namespace std;
class Product
{
public:
	Product(){};
	~Product(){};

	void AddPartA(const string& buildPara)
	{
		cout << "Step1:Product BuildPartA..." << buildPara << endl;
	};

	void AddPartB(const string& buildPara)
	{
		cout << "Step2:Product BuildPartB..." << buildPara << endl;
	};

	void AddPartC(const string& buildPara)
	{
		cout << "Step3:Product BuildPartC..." << buildPara << endl;
	};

protected:

private:

};

#endif /* PRODUCT_H_ */
