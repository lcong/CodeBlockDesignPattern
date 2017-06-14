/*
 * Director.h
 *
 *  Created on: Aug 27, 2014
 *      Author: lcong
 */

#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

class Builder;
class Product;
class Director
{
public:
	Director(Builder* bld);
	~Director();
	void Construct();
	Product* GetProduct();
protected:
private:
	Builder* _bld;

};
#endif /* DIRECTOR_H_ */
