// Program to Reverse a Integer
#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter a Integer : ";
   cin >> n;
   int reverse = 0;
   while (n!=0) {
       int rem = n % 10;
       reverse = reverse * 10 + rem;
       n = n /10;
   }
   cout << "Reverse Number is: " << reverse;
}