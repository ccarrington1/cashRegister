#include <iostream>
#include <string>
#include "cashRegister_header.h"
#include "dispenserType_header.h"

using namespace std;

int main()
{

	int initial; //initial register value;
	bool a;  //variable to check true or false.
	int adm;
	int sbm;
	char anyKey;

	cout << endl;
	cout << "Output for the Cash Register: ";
	cout << endl << endl;

	cout << "Enter the initial amount for Registers 1 and 2" << endl;
	cin >> initial;

	cashRegister obj1(initial);
	cashRegister obj2(initial);

	cout << "Displaying amount in each Register by using stream insertion operator." << endl;
	cout << "Register 1: " << obj1 << endl;
	cout << "Register 2: " << obj2 << endl;

	int ad;
	int sb;

	cout << "Enter the amount of cash to be added to Register 1: " << endl;
	cin >> ad;

	cashRegister add(ad);
	obj1 = obj1.operator+(add);
	adm = obj1.getCurrentBalance();

	cout << "Updated amount in Register 1 after adding: " << adm << endl;
	cout << "Enter the amount to be subtracted from Register 1: " << endl;
	cin >> sb;

	cashRegister sub(sb);
	obj1 = obj1.operator-(sub);
	sbm = obj1.getCurrentBalance();

	cout << "Updated amount in Register 1 after subtracting: " << sbm << endl << endl;

	cashRegister second(0);

	cout << "Enter the amount to be added in to Register 2: " << endl;
	cin >> ad;

	cashRegister add2(ad);
	obj2 = obj2.operator+(add2);
	adm = obj2.getCurrentBalance();

	cout << "Updated amount in Register 2 after adding: " << adm << endl;

	cout << "Enter the amount to be subtracted from Register 2: " << endl;
	cin >> sb;

	cashRegister sub2(sb);
	obj2 = obj2.operator-(sub2);
	sbm = obj2.getCurrentBalance();

	cout << "Updated amount in Register 2 after subtracting: " << sbm << endl;

	//compare equal

	cashRegister addd(obj1);
	a = addd.operator==(obj2);

	if (a == 1)
	{
		cout << "The cash in both registers are equal." << endl;
	}

	else
		cout << "The cash in both registers are not equal." << endl;


	a = addd.operator>(obj2);

	if (a == 1)
	{
		cout << "Cash register 1 has more cash." << endl;
	}

	else
		cout << "Cash register 2 has more cash." << endl;

	cout << "_______________________________________" << endl << endl;

	cout << "Output for class dispenser Type: " << endl;

	int n;
	int c;
	int i;

	cout << "Enter the number of items and cost." << endl;
	cout << "Items: " << endl;
	cin >> n;
	cout << "Cost: " << endl << endl;
	cin >> c;

	dispenserType dobj1;
	dispenserType dobj2;

	cout << "Displaying cash and number of items by using stream insertion operator." << endl;
	cout << dobj1;

	cout << "After purchasing one item, number of items are "; 
	dobj1.makeSale();
	i = dobj1.getNoOfItems();
	cout << i << endl;

	cout << "After increase number of items by 1, the number of items are: " << endl;
	dobj1.operator++(i);
	i = dobj1.getNoOfItems();
	cout << i << endl;

	cout << "After decreasing number of items by 1, the number of items are: " << endl;
	dobj1.operator--(i);
	i = dobj1.getNoOfItems();
	cout << i << endl;

	cout << "Thank you! Press any key to exit.";
	cin >> anyKey;

	return 0;

}