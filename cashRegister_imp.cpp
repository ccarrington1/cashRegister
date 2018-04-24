
#include <iostream>
#include "cashRegister_header.h"

using namespace std;

int cashRegister::getCurrentBalance() const
{
	return cashOnHand;
}

cashRegister::cashRegister(int cashIn)
{
	if (cashIn >= 0)
		cashOnHand = cashIn;
	else
		cashOnHand = 500;
}



