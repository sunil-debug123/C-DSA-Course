// 1. Decimal To binary 
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

// 2. Neagative to binary

#include <iostream>
using namespace std;

void print_binary(int num)
{
    // `result` stores the binary notation of `num` in decimal format
    int result = 0;

    // It ignores leading zeros and leading ones
    int place_value = 1;
    while (!(num == 0 | num == -1))
    {
        // Extracting the rightmost bit from `num`
        int bit = num & 1;

        // appending `bit` to `result`
        result += bit * place_value;

        // Shifting `num` to the right
        // so that second bit (from right) now become the rightmost bit
        num = num >> 1;
        place_value *= 10;
    }

    cout << result << endl;
}

int main()
{
    int number = -5;
    int neg_number = ~number + 1; // Took 2's compliment of number

    print_binary(number);
    print_binary(neg_number);
}

// 3. Bit to decimal
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n ;
    cout << "Enter Number of Bits : ";
    cin >> n;
    int i = 0;
    int ans = 0;
    while ( n !=0 ) {
        int bits = n % 10;
        if (bits == 1) {
            ans = ans + pow(2, i);
        }
        n = n / 10;
            i++;
    }
    cout << ans;
}