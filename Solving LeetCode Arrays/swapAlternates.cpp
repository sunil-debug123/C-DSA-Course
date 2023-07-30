#include <iostream>
using namespace std;

void swapAlternates(int arr[], int size) {
    for(int i = 0; i < size-1; i= i+2){
        if (i+1 < size) {
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i < size; i++) {
      cout << arr[i] << " ";
    }
}


int main() {
    int n;
    cout << "Enter the Size of Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array Elements : ";
    for (int i=0; i<n ; i++) {
        cin >> arr[i];
    }
    swapAlternates(arr, n);
    printArray(arr,n);
    return 0;
}