#pragma once

#include <iostream>

using namespace std;

class cashRegister
{
	friend ostream& operator<<(ostream&, const cashRegister&);
public:
	int getCurrentBalance() const;

	void acceptAmount(int amountIn);

	cashRegister operator+(const cashRegister&);
	cashRegister operator-(const cashRegister&);

	bool operator==(const cashRegister& cashR) const;
	bool operator!=(const cashRegister& cashR) const;
	bool operator<=(const cashRegister& cashR) const;
	bool operator<(const cashRegister& cashR) const;
	bool operator>=(const cashRegister& cashR) const;
	bool operator>(const cashRegister& cashR) const;

	cashRegister(int cashIn = 500);

private:
	int cashOnHand;     //variable to store the cash 
						//in the register
};
