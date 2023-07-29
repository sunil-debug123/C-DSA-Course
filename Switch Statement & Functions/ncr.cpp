#include<iostream>
using namespace std;

int factorial(int a) {
    int i = 1;
    int fact = 1;
    while (i <= a){
        fact = fact * i;
        i++;
    }
    return fact;
}

int ncr (int a, int b){
    int num = factorial(a);
    int denum = factorial(b) *  factorial(a-b);
    int ans = num /denum;
    return ans;
}

int main()
{
	int a, b;
	cout << "Enter the numbers : ";
	cin >> a >> b;
	// Call the function
	int output = ncr(a,b);
	cout << "The output is: " << output;
	return 0;
}