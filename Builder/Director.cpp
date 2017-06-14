/*
 * Director.cpp
 *
 *  Created on: Aug 27, 2014
 *      Author: lcong
 */

#include "Director.h"
#include "Builder.h"

Director::Director(Builder* bld)
{
	_bld = bld;

}

Director::~Director()
{
	if (_bld != NULL)
	{
		delete _bld;
		_bld = NULL;
	}
}

void Director::Construct()
{
	_bld->BuildPartA("aaaa");
	_bld->BuildPartB("bbbb");
	_bld->BuildPartC("cccc");
}



Product* Director::GetProduct()
{
	return _bld->GetProduct();
}
