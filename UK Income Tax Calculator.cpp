#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

// Variables
void clrscr()
{
	// Clear screen function
	std::system("cls");
}
int main()
{	// Income and tax variables
	double income, tax;
	cout << "Enter your annual income:\n";
	cin >> income;
	
	//Show GBP Symbol cos C++ no likey tea ASCII.
	char pound = 156;


	// Tax Calculation
	if (income <= 0) {
		cout << "Invalid entry";
		tax = 0;
		return 0;
	}
	if
		(income <= 12500) {
		tax = 0;
		cout << ("Your tax bracket is: Tax Free (0%)");
	}
	else if 
		(income <= 50000 && income >= 12500) {
		tax = 0.2 * (income - 12500);
		cout << ("Your Tax Bracket is: Basic Rate (20%)\n");
	}

	else if (income >= 50000 && income <= 125001) {
		tax = 0.4 * (income - 12500);
		cout << ("Your Tax Bracket is: Higher Rate (40% - £12500\n");
	}

	else if (income >= 125001 && income < 150001) {
		tax = 0.4 * (income);
		cout << ("Your Tax Bracket is: Higher Rate (40%)\n");
	}

	else
		(income >= 150001);{
			tax = (income - 150000) * 0.45 + (50000);
		cout << ("Your Tax Bracket is: Additional Rate\n");
	}

	// Final results output
	cout << "Annual Income: " << pound<<income;
	cout << "\nIncome Tax: " << pound<<tax;
	cout << "\nIncome After Tax: " << pound<<(income - tax);
}