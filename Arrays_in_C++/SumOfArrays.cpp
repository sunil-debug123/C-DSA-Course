// Sum of Element in Array
#include <iostream>
using namespace std;

int getSumElements(int arr[], int size){
    int sum = 0;
     for (int i =0; i < size; i++){
         sum = sum + arr[i];
     }
    return sum;
}

int main() {
    int n;
    cout <<  "Enter Size of the Array : ";
    cin >> n;
    int arr[n];
    int i;
    cout << "Enter The Array Elements : ";
    for (i = 0; i < n; i++ ){
        cin >> arr[i];
    }
    cout << "Sum of Elements is : " << getSumElements(arr, n) << endl;

    return 0;
}