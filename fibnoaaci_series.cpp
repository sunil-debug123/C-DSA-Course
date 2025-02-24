// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num;
    int a = 0;
    int b = 1;
    cout << "Enter the Number to get list: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        int sum = a + b;
        cout << sum << "";
        a = b;
        b = sum;
    }
}