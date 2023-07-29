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

// Generate Fibonacci Series

#include <iostream>
using namespace std;

void fibonacciSeries(int num) {
    int n1 = 0, n2 = 1, nextNum;
    cout << "Fibonacci Series up to " << num << ": ";

    for (int i = 0; i < num; i++) {
        if (i == 0) {
            cout << n1 << " ";
        } else if (i == 1) {
                cout << n2 << " ";
        } else {
            nextNum = n1 + n2;
            n1 = n2;
            n2 = nextNum;
            cout << nextNum << " ";
        }
    }
}

int main() {
    int a;
    cout << "Enter the number of Fibonacci terms: ";
    cin >> a;
    // Call the function to generate the Fibonacci series
    fibonacciSeries(a);

    return 0;
}

