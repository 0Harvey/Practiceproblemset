// Practiceproblemset.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
  
	float loanAmount;
	cout << "What is your loan amount: ";
	cin >> loanAmount;

	float interestRate;
	cout << "What is your interest rate: ";
	cin >> interestRate;
	float interestPercent = interestRate * 0.01;
	float monthlyinterestCalc = interestPercent / 12;

	float loanDuration;
	cout << "Please enter your loan duration: ";
	cin >> loanDuration;

	float loanCost;
	loanCost = loanAmount * interestPercent;
	

	float monthlyPayment = loanAmount / loanDuration;
	cout << "Your monthly payment before interest is: $" << monthlyPayment << endl;

	string userInput;
	cout << "Would you like to add an additional payment? (yes/no):";
	cin >> userInput;

	float newloanValue;
	float monthlyinterestCost;

	float additionalPayment;
	if (userInput == "yes") 
	{
		cout << "Enter additional payment amount: ";
		cin >> additionalPayment;
		newloanValue = loanAmount - additionalPayment;
		monthlyinterestCost = monthlyinterestCalc * newloanValue;

	}
	else if (userInput == "no")
	{
		monthlyinterestCost = monthlyinterestCalc * loanAmount;
			
	}
	else {
		cout << "Invalid input. Please type (yes/no) only." << endl;
		cin.clear();
		cin.ignore(999, '\n');
	}

	cout << endl;

	cout << "Your monthly interest payment is: $" << monthlyinterestCost << endl;


	float totalinterestCost;
	totalinterestCost = monthlyinterestCost * loanDuration;
	cout << "Your total cost for interest at the end of " << loanDuration << " months is $" << totalinterestCost << "." << endl;
	cout << endl;

	cout << "-MONTHLY INTEREST BALANCE ESTIMATE-" << endl;
	// value for interest balance does not decriment. need to fix
		for (int x = loanDuration; x > 0; x--)
		{
			
			cout << "Your remaining interest remaining balance for month " << x << "  is $" << totalinterestCost - monthlyinterestCost << "." << endl;
		}









	return 0;
}

