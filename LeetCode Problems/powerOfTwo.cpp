//Program: Check Given Number is Power of 2 :

#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int n;
   cout << "Enter a Integer : ";
   cin >> n;
   int result = 1;
   while (result < n) {
       result = result * 2;
   }
   if (result == n) {
       cout << n << " is Power of 2 \n";
   }
   else {
        cout << n << " is not Power of 2 \n";
   }
}