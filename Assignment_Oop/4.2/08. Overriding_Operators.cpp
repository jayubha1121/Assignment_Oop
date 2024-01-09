//08 - Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading


#include<iostream>
using namespace std;


// Function to perform addition
double performOperation(double num1, double num2) {
    return num1 + num2;
}

// Function to perform subtraction
double performOperation(int num1, int num2) {
    return num1 - num2;
}

// Function to perform multiplication
double performOperation(float num1, float num2) {
    return num1 * num2;
}

// Function to perform division
double performOperation(int num1, float num2) {
    if (num2 != 0) {
        return static_cast<double>(num1) / num2;
    } else {
        cerr << "Error: Division by zero" << endl;
        return 0.0;
    }
}

int main() {
    double result;

    // Addition
    result = performOperation(50.00,50.00);
    cout << "Addition: " << result << endl;

    // Subtraction
    result = performOperation(100,30);
    cout << "Subtraction: " << result << endl;

    // Multiplication
    result = performOperation(5.0f, 5.0f);
    cout << "Multiplication: " << result << endl;

    // Division
    result = performOperation(100, 5.0f);
    cout << "Division: " << result << endl;

    return 0;
}


