// Simple Calculator
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the First Number : ";
    cin >> a;
    int b;
    cout << "Enter the Second Number : ";
    cin >> b;
    char operation;
    cout << "Enter the Operation to perform (+,-,*,/): ";
    cin >> operation;
    
    switch (operation) {
        case '+':
        cout << "Sum of Two digit is : " << a + b << endl;
        break;
        case '-':
        cout << "Subraction of two digit is : " << a-b << endl;
        break;
        case '*':
        cout << "Product of two digit is : " << a * b << endl;
        break;
        case '/':
        cout << "Division of two digit is : " << a / b << endl;
        break;
        default: cout << "Invalid Operation" << endl;
    }
}