// 1. check a number is positive or negative
#include <iostream>
using namespace std;


int main()
{
    int a;
    cin >> a;
    if (a > 0)
    {
        cout << a << " is positive number" << endl;
    }
    else
    {
        cout << a << " is negative number" << endl;
    }
}

// 2. check whether the given character is in upper case, lower case, or non-alphabetic character
#include <iostream>
using namespace std;


int main()
{
    char ch;
    cout << "Enter the Value if ch : ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an UpperCase character\n";

    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is an LowerCase character\n";

    else
        cout << ch << " is not an alphabetic character\n";
}

// 3.  Print 1 to N
#include <iostream>
using namespace std;


int main()
{
    int ch;
    int i = 0;
    cout << "Enter the Value if ch : ";
    cin >> ch;
    while (i < ch)
    {
        cout << i << endl;
        i++;
    }
}


// 4. Print sum of 1 to N
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Value of n : " << " ";
    cin >> n;
    int i = 0;
    int sum = 0;
    while ( i<=n ) {
        sum = sum + i;
        i++;
    }
    cout << "Total sum of 1 to N number is: " << sum;
}

// 5. Print sum of even number 1 to N
#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter Value of n : " << " ";
    cin >> n;
    int i = 0;
    int sum = 0;
    while ( i<=n ) {
        if (i%2 == 0){
        sum = sum + i;
        }
        i++;
    }
    cout << "Sum of Prime Numbers 1 to N number is: " << sum;
}