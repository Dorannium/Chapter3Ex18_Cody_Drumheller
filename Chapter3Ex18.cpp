/*
Title: Chapter 3 Exercise 18 -Interest Earned
File Name: Chapter3Ex18
Programmer: Cody Drumheller
Date:20241025
Requirements:
Write a program that ask for the principle, the interest rate,
and the number of times the interest is compounded.
*/

#include <iostream>
#include <cmath>  
#include <iomanip> 

using namespace std;

int main() {
 
    double principal, rate, interestEarned, amountInSavings;
    int compoundsPerYear;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the interest rate: ";
    cin >> rate;
    rate /= 100;

    cout << "You entered interest rate: " << rate * 100 << "%" << endl;

    cout << "Enter the number of times interest is compounded per year: ";
    cin >> compoundsPerYear;

    cout << "You entered: " << compoundsPerYear << " times compounded per year." << endl;
 
    amountInSavings = principal * pow((1 + rate / compoundsPerYear), compoundsPerYear);

    interestEarned = amountInSavings - principal;

    cout << fixed << setprecision(2);
    cout << "Interest Rate: " << rate * 100 << "%" << endl;
    cout << "Times Compounded: " << compoundsPerYear << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest: $" << interestEarned << endl;
    cout << "Amount in Savings: $" << amountInSavings << endl;

    return 0;
}



