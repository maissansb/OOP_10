#include <iostream>
#include "complex.h"
#include "complex.cpp"
using namespace std;

int main()
{
    double rPart, iPart;
    complex firstNumber, secondNumber, result;
    cout << "Enter the real and imaginary parts of the first number: ";
    cin >> rPart >> iPart;
    firstNumber.set(rPart, iPart);
    cout << "The first complex number is: ";
    firstNumber.print();
    cout << "Enter the real and imaginary parts of the second number: ";
    cin >> rPart >> iPart;

    secondNumber.set(rPart, iPart);
    cout << "The second complex number is: ";
    secondNumber.print();
    result = firstNumber + secondNumber;
    cout << "The sum of the two numbers is: ";
    result.print();
    result = firstNumber * secondNumber;
    cout << "The multiplication of the two numbers is: ";
    result.print();

    if(firstNumber == secondNumber)
        cout << "The two numbers are equal. " << endl;
    else
        cout << "The two numbers are not equal. " << endl;

    if(firstNumber > secondNumber)
        cout << "The first number is larger than the second number." << endl;
    else
        cout << "The first number is not larger than the second number." << endl;

    return 0;
}
