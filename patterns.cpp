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


// 3. Print the series Pattern 1234, 456, 789
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
    int count  = 1;
    while ( i <= rows )
    {
        int j = 1;
        while ( j <= cols) {
            cout << count << " ";
            count++;
            j ++;
        }
        cout << endl;
        i++;
    }
}

// 4. Print left triangle Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the rows ";
    cin >> rows;
    int i = 1;
    while ( i <= rows )
    {
        int j = 1;
        while ( j <= i) {
            cout << "*" << " ";
            j ++;
        }
        cout << endl;
        i++;
    }
}

// 5. Print numbers in left triangle Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the rows ";
    cin >> rows;
    int i = 1;
    while ( i <= rows )
    {
        int j = 1;
        while ( j <= i) {
            cout << i << " ";
            j ++;
        }
        cout << endl;
        i++;
    }
}

// 6. Print series of numbers in left triangle Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the rows ";
    cin >> rows;
    int i = 1;
    int count = 1 ;
    while ( i <= rows )
    {
        int j = 1;
        while ( j <= i) {
            cout << count << " ";
            count ++; 
            j ++;
        }
        cout << endl;
        i++;
    }
}

// 7. Print series of according to row numbers in left triangle Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the rows ";
    cin >> rows;
    int i = 1;
    int count = 1 ;
    while ( i <= rows )
    {
        int j = 1;
        int z = i;
        while ( j <= i) {
            cout << z << " ";
            z++; 
            j ++;
        }
        cout << endl;
        i++;
    }
}

// 8. Print reverse number in left triangle Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the rows ";
    cin >> rows;
    int i = 1;
    while ( i <= rows )
    {
        int j = 1;
        int count = i;
        while ( j <= i) {
            cout << count << " ";
            count --;
            j ++;
        }
        cout << endl;
        i++;
    }
}

// 9. Print AAA,BBB,CCC Pattern
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
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j ++;
        }
        cout << endl;
        i++;
    }
}

// 10. Print ABCD Pattern
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
        int j = 0;
        while ( j < cols) {
            char ch = 'A' + j;
            cout << ch << " ";
            j ++;
        }
        cout << endl;
        i++;
    }
}

// 11. Print ABCDEF Pattern
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
    int count = 0;
    while ( i <= rows )
    {
        int j = 1;
        while ( j <= cols) {
            char ch = 'A' + count;
            cout << ch << " ";
            count ++;
            j ++;
        }
        cout << endl;
        i++;
    }
}

// 12. Print ABC, BCD Pattern
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
        int j = 0;
        while ( j <= cols) {
            char ch = 'A' + i+j-1;
            cout << ch << " ";
            j ++;
        }
        cout << endl;
        i++;
    }
}

// 13. Print ABC ,ABC , ABC Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    int i = 1;
    while ( i <= rows)
    {
        int j = 0;
        while (j < rows) {
            char ch = 'A' + j;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

// 14. Print ABC ,ABC , ABC Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    int i = 1;
    int counter = 0;
    while ( i <= rows)
    {
        int j = 0;
        while (j < rows) {
            char ch = 'A' + counter;
            cout << ch << " ";
            counter ++;
            j++;
        }
        cout << endl;
        i++;
    }
}

// 15. Print ABC ,BCE , CDE Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    int i = 1;
    while ( i <= rows)
    {
        int j = 0;
        while (j < rows) {
            char ch = 'A' + i +j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

// 16. Print ABC triangle Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    int i = 0;
    while ( i <= rows)
    {
        int j = 0;
        while (j <= i) {
            char ch = 'A' + i;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

// 17. Print ABCDEFG triangle Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    int i = 0;
    int count = 0;
    while ( i <= rows)
    {
        int j = 0;
        while (j <= i) {
            char ch = 'A' + count;
            cout << ch << " ";
            count ++;
            j++;
        }
        cout << endl;
        i++;
    }
}

// 18. Print ABC,CDE triangle Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    int i = 1;
    while ( i <= rows)
    {
        int j = 0;
        while (j < i) {
            char ch = 'A' + i+j -1 ;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

// 19. Print Desending ABC,CDE triangle Pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    int i = 1;
    while ( i <= rows)
    {
        int j = 0;
        char ch = 'A' + rows - i;
        while (j < i) {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}

// 20. Print mirror right side triangle
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    int i = 1;
    while ( i <= rows)
    {
        int j = i;
        int k = 1;
        while (j < rows){        
        cout << "_" << " ";
        j++;
        }
        while (k <= i){
        cout << "* ";
        k++;
        }
        cout << endl;
    i++;
    }
}

// 21. Print inverted right side triangle
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    int i = 1;
    while ( i <= rows)
    {
        int k = i;
        while (k <= rows){
        cout << "* ";
        k++;
        }
        cout << endl;
    i++;
    }
}

// 22. Print inverted right side triangle
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    int i = 1;
    while ( i <= rows)
    {
        int k = 1;
        int j = 1;
        while(j < i)
        {
            cout << " _ " << "";
            j++;
        }
        while (k <= rows-i+1 ){
        cout << "* ";
        k++;
        }
        cout << endl;  
    i++;
    }
}

// 23 .Print mirror number triangle;
#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter number of Rows : ";
   cin >> rows;
   int i = 1;
   while ( i <= rows)
   {
       int j = 1;
       int k = 1;
       while (j<=i)
       {
           cout << " ";
           j++;
       }
       while (k<=rows-i+1){
           cout << i << " ";
           k++;
       }
       cout << endl;
       i++;
   }
}

// 24 .Print mirror number triangle;
#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter number of Rows : ";
   cin >> rows;
   int i = 1;
   while ( i <= rows)
   {
       int j = i;
       int k = 1;
       while (j < rows)
       {
           cout << "_" << " ";
           j++;
       }
       while (k<= i ){
           cout << i << " ";
           k++;
       }
       cout << endl;
       i++;
   }
}

// 25 .Print mirror number triangle;
#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter number of Rows : ";
   cin >> rows;
   int i = 1;
   int count = 1;
   while ( i <= rows)
   {
       int j = i;
       int k = 1;
       while (j < rows)
       {
           cout << "_" << " ";
           j++;
       }
       while (k<= i ){
           cout << count << " ";
           count ++;
           k++;
       }
       cout << endl;
       i++;
   }
}

// 26 .Print mirror number triangle;
#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter number of Rows : ";
   cin >> rows;
   int i = 1;
   while ( i <= rows)
   {
       int j = 1;
       int k = 1;
       while (j < i)
       {
           cout << "_" << " ";
           j++;
       }
       while (k<=rows-i+1){ 
           cout << k+j-1 << " ";
           k++;
       }
       cout << endl;
       i++;
   }
}

// 27 .Print mirror number triangle;
#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter number of Rows : ";
   cin >> rows;
   int i = 1;
   while ( i <= rows)
   {
       int j = i;
       int k = 1;
       while (j < rows)
       {
           cout << " _ ";
           j++;
       }
       while (k<= i){ 
           cout << k << "  ";
           k++;
       }
       int start = i - 1;
       while (start) {
           cout << start << " ";
           start--;
       }
       cout << endl;
       i++;
   }
}

// 28 .Print Dabbang Pattern;
#include <iostream>
using namespace std; 

int main() {
   int rows;
   cout << "Enter number of Rows : ";
   cin >> rows;
   int i = 1;
   while ( i <= rows)
   {
       int j = 1;
       int k = rows;
       int stars = 1;
       while (j <= rows-i+1)
       {
           cout << j << " ";
           j++;
       }
       while (stars < i*2-1){
           cout << " * ";
           stars++;
       }
       while ( k >= i) { 
           cout << k-i+1 << " ";
           k--;
       }
       cout << endl;
       i++;
   }
}