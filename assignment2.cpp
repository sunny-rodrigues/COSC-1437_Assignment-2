// Programming Assignment 2
// Programming Fundamentals II (COSC 1437)
// Author: Sunny Rodrigues
// Description: Calculates weekly summer job pay with tax and bonus.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const double TAX_RATE = 0.14;
    const int BONUS = 50;

    string name;
    double payRate;
    double hoursWorked; 
    double grossPay;
    double tax;
    double netPay;

    cout << fixed << setprecision(2);
    
    cout << "Enter last name: ";
    cin >> name;

    cout << "Enter hourly pay rate: ";
    cin >> payRate;
    
    cout << "Enter hours worked this week: ";
    cin >> hoursWorked;

    grossPay = payRate * hoursWorked;
    tax = grossPay * TAX_RATE;
    netPay = grossPay - tax + BONUS;

    cout << endl;
    cout << "Employee: "
    << name << endl;
    cout << "Pay Rate: $"
    << payRate << endl;
    cout << "Hours Worked: "
    << hoursWorked << endl;
    cout << "Gross Pay: $"
    << grossPay << endl;
    cout << "Tax (14%): $"
    << tax << endl;
    cout << "Net Pay (after tax + $50 bonus): $"
    << netPay << endl;

    return 0;
}






