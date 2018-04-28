
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

