
//**********************************************************
// Author: D.S. Malik
//
// Implementation file dispenserType.cpp 
// This file contains the definitions of the functions to 
// implement the operations of the class dispenserType.
//**********************************************************

#include <iostream> 
#include "dispenserType_header.h"

using namespace std;

int dispenserType::getNoOfItems() const
{
	return numberOfItems;
}

int dispenserType::getCost() const
{
	return cost;
}

void dispenserType::makeSale()
{
	numberOfItems--;
}

dispenserType::dispenserType(int setNoOfItems, int setCost)
{
	//check if number of items > zero.
	if (setNoOfItems > 0)
		numberOfItems = setNoOfItems;
	else
		numberOfItems = 50;

	//check if cost > zero.
	if (setCost >= 0)
		cost = setCost;
	else
		cost = 50;
}

dispenserType dispenserType::operator++(int u)
{
	dispenserType t = *this;
	numberOfItems++;
	return t;
}

dispenserType dispenserType::operator--(int u)
{
	dispenserType t = *this;
	numberOfItems--;
	return t;
}

ostream& operator<<(ostream& oobj, const dispenserType& obj)
{
	oobj << "Number  of items are " << obj.numberOfItems << endl << "Cost is " << obj.cost << endl;
	return oobj;
}

