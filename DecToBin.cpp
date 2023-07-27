// Decimal To binary 
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n ;
    cout << "Enter the Number : ";
    cin >> n;
    int bits = 0;
    int i = 0;
    while(n!=0){
       int digit = n & 1;
       bits = (digit * pow(10, i)) + bits;
       n = n >> 1;
       i++;
    }
    cout << "Answer in Bits is : " << bits;
}