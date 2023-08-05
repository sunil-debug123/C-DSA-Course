// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}

int main() {
    int n;
    cout << "Enter the Size of Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array Elements : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter the Key to Find : ";
    cin >> key;
    cout << " Index of key is " << binarySearch(arr, n, key) << endl;
    return 0;
}