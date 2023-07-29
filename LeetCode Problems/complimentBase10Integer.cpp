// Program to Compliment a Integer
#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int n;
   cout << "Enter a Integer : ";
   cin >> n;
   int mask = 0;
   int ans;
   int m = n;
   if (n == 0)
   {
    return 1;
   }
   while (m!=0) {
       mask = (mask << 1) | 1;
       m = m >> 1;
   }
   ans = (~n) & mask;
   cout << "Compliment is: " << ans;
}