
#include <iostream>
#include "cashRegister_header.h"

using namespace std;

cashRegister::cashRegister(int cashIn)
{
	if (cashIn >= 0)
		cashOnHand = cashIn;
	else
		cashOnHand = 500;
}


int cashRegister::getCurrentBalance() const
{
	return cashOnHand;
}

void cashRegister::acceptAmount(int amountIn)
{

	cashOnHand = +amountIn;

}



cashRegister cashRegister::operator+(const cashRegister& add) {

	cashRegister temp;
	temp.cashOnHand = cashOnHand + add.cashOnHand;
		return temp;
};

cashRegister cashRegister::operator-(const cashRegister& sub) 
{
	cashRegister temp;
	temp.cashOnHand = cashOnHand - sub.cashOnHand;
	return temp;
}

bool cashRegister::operator==(const cashRegister& obj) const
{

	if (cashOnHand == obj.cashOnHand)
		return true;
	else
		return false;
}

bool cashRegister::operator>(const cashRegister& obj) const
{

	if (cashOnHand > obj.cashOnHand)
		return true;
	else
		return false;
}


ostream& operator<<(ostream& oobj, const cashRegister& obj)
{
	oobj << obj.cashOnHand;
	return oobj;
};



bool cashRegister::operator!=(const cashRegister& obj) const
{

	if (cashOnHand != obj.cashOnHand)
		return true;
	else
		return false;
}

bool cashRegister::operator<=(const cashRegister& obj) const
{

	if (cashOnHand <= obj.cashOnHand)
		return true;
	else
		return false;
}

bool cashRegister::operator<(const cashRegister& obj) const
{

	if (cashOnHand < obj.cashOnHand)
		return true;
	else
		return false;
}

bool cashRegister::operator>=(const cashRegister& obj) const
{

	if (cashOnHand >= obj.cashOnHand)
		return true;
	else
		return false;
}



