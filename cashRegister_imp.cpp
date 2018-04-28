
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

friend ostream& operator<<(ostream&, const cashRegister&)
{

	return object;
};


cashRegister cashRegister::operator+(int& amount) const {

	cashRegister.total;
	added.total = cashOnHand
		return (cashOnHand);
};




