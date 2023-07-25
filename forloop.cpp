// 1. Print  count from 1 to N

#include <iostream>
using namespace std;

int main() {
    int n = 1;
    cout << "Enter the number : ";
    cin >> n;
    for (int i =1; i <=n ; i++){
        cout << i << endl;
    }
}

// 2. Fibonanci Series
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}