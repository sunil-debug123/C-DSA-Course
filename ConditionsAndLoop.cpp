#include <iostream>
using namespace std;

// 1. check a number is positive or negative

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

#include <iostream>
using namespace std;

// 2. check whether the given character is in upper case, lower case, or non-alphabetic character

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

#include <iostream>
using namespace std;

// 3.  Print 1 to N

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