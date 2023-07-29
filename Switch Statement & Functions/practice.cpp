// Count Set Bits in Two Numbers and Calculate Their Sum

#include <iostream>
using namespace std;

int countSetBits(int num) {
    int count = 0;
    while (num != 0) {
        if (num &1 == 1){
        count++;
     }
     num = num >> 1;
    }
    return count;
}

int checkBits(int a, int b) {
    return countSetBits(a) + countSetBits(b);
}

int main() {
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    // Call the function
    int output = checkBits(a, b);
    cout << "The output is: " << output;
    return 0;
}
