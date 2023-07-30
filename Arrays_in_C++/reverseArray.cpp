#include <iostream>
using namespace std;

void ReverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the center of the array
        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter Size of the Array: ";
    cin >> n;
    int arr[n];

    cout << "Enter The Array Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array using the custom ReverseArray function
    ReverseArray(arr, n);

    cout << "Reverse Array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
