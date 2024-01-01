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
	float monthlyInterestCalc = interestPercent / 12;

	float loanDuration;
	cout << "Please enter your loan duration: ";
	cin >> loanDuration;

	float loanCost = loanAmount * interestPercent;
	

	float monthlyPayment = loanAmount / loanDuration;
	
	cout << "Your monthly payment before interest is: $" << monthlyPayment << endl;

	string userInput;
	cout << "Would you like to add an additional payment? (yes/no):";
	cin >> userInput;

	float monthlyInterestCost;  
	float totalInterestCost;

	if (userInput == "yes") {
		float additionalPayment;
		cout << "Enter additional payment amount: ";
		cin >> additionalPayment;
		float newLoanValue = loanAmount - additionalPayment;
		monthlyInterestCost = monthlyInterestCalc * newLoanValue;
		cout << "Loan balance (Excludes interest): " << newLoanValue<<endl;
	}
	else if (userInput == "no") {
		monthlyInterestCost = monthlyInterestCalc * loanAmount;
	}
	else {
		cout << "Invalid input. Please type (yes/no) only." << endl;
		return 1;
	}

	cout << "Your monthly interest payment is: $" << monthlyInterestCost << endl;
	totalInterestCost = monthlyInterestCost * loanDuration;
	cout << "Your total cost for interest at the end of " << loanDuration << " months is $" << totalInterestCost << "." << endl;
	cout << endl;

	cout << "-REMAINING MONTHLY INTEREST BALANCE ESTIMATE-" << endl;
	cout << "MONTHS LEFT: "<< loanDuration <<" | BALANCE : $" <<totalInterestCost<<endl;
	int remainingMonths = loanDuration-1; // Start from loanDuration
	while (remainingMonths > 0) {
		float remainingInterestBalance = monthlyInterestCost * remainingMonths; // Calculate remaining interest balance
		cout << "MONTHS LEFT: " << remainingMonths << " | BALANCE: $" << remainingInterestBalance << "." << endl;
		remainingMonths--;
	}

	



	//for (int x = loanDuration; x > 0; x--)
	//{
	//		cout << "Your remaining interest remaining balance for month " << x << " is $" << totalinterestCost - monthlyinterestCost << "." << endl;
	//	}









	return 0;
}

