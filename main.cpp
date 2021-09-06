/*
Emily Contreras COSC-1436-57001
Created on replit 
This program will enable the user to imput x amount of cents and will then be converted into dollars, quarters, dimes, nickles, and pennies.
*/
#include <iostream>
using namespace std;
int main() {
 
int amount, dollars, quarters, dimes, nickles, pennies;

	cout<< "Enter the number of pennies: ";
	cin >> amount; //input

 dollars = amount / 100; //process
 amount = amount % 100; //process


	quarters = amount / 25; //process
	amount = amount % 25; //process


	dimes = amount / 10; //process
	amount = amount % 10; //process


	nickles = amount / 5; //process
	amount = amount % 5; //process


	pennies = amount; //process


  cout << "Dollars = " << dollars << endl; //output
	cout << "Quarters = " << quarters << endl; //output
	cout << "Dimes = " << dimes << endl; //output
	cout << "Nickels = " << nickles << endl; //output
	cout << "Pennies= " << pennies << endl; //output

 return 0;

}