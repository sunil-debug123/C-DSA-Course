// Functions Intro
#include<iostream>
using namespace std;

int power (int a, int b){
    int ans = 1 ;
    for(int i = 1; i<=b; i++){
        ans = ans * a;
    }
    return ans; 
    
}

int main()
{
	int a, b;
	cout << "Enter the numbers : ";
	cin >> a >> b;
	// Call the function
	int output = power(a,b);
	cout << "The output Is: " << output;
	return 0;
}