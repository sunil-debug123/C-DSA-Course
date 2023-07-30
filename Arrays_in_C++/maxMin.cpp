// Max and Min Element in Array
#include <iostream>
using namespace std;

int getMaxElement(int arr[], int size){
    int max = arr[0];
    for (int i = 1; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int getMinElement(int arr[], int size){
    int min = arr[0];
    for (int i = 1; i < size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
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
    cout << "Max Element is : " << getMaxElement(arr, n) << endl;
    cout << "Min Element is : " << getMinElement(arr, n) << endl;
    return 0;
}