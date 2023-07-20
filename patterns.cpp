// 1. Print the Pattern 1234,1234,1234
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the rows ";
    cin >> rows;
    int cols;
    cout << "Enter the columns ";
    cin >> cols;
    int i = 1;
    while ( i <= rows )
    {
        int j = 1;
        while ( j <= cols) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

// 2. Print the reverse Pattern 1234,1234,1234
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the rows ";
    cin >> rows;
    int cols;
    cout << "Enter the columns ";
    cin >> cols;
    int i = 1;
    while ( i <= rows )
    {
        int j = 1;
        while ( j <= cols) { 5-1 + 1 
            cout << cols-j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}