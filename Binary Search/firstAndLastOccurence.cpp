#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int first = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            first = mid;
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return first;
}

int lastOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int last = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            last = mid;
            start = mid + 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return last;
}

int main() {
    int n;
    cout << "Enter the Size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Sorted Array Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the value of K to Find: ";
    cin >> key;
    int firstIndex = firstOccurrence(arr, n, key);
    int lastIndex = lastOccurrence(arr, n, key);

    if (firstIndex == -1) {
        cout << "Key not found in the array." << endl;
    } else {
        cout << "First occurrence of key at index: " << firstIndex << endl;
        cout << "Last occurrence of key at index: " << lastIndex << endl;
    }

    return 0;
}
