#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findInterSection(int arr1[], int arr2[], int size1, int size2, vector<int>& duplicates) {
    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);

    int i = 0, j = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] == arr2[j]) {
            duplicates.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
}

int main() {
    int n1; 
    cout << "Enter the Size of Array 1: ";
    cin >> n1;
    int array1[n1]; 
    
    cout << "Enter the Array 1 Elements: ";
    for (int i = 0; i < n1; i++) {
        cin >> array1[i];
    }
    
    int n2;
    cout << "Enter size of Array 2: ";
    cin >> n2;
    int array2[n2];
    cout << "Enter the Array 2 Elements: ";
    for (int i = 0; i < n2; i++) {
        cin >> array2[i];
    }
    
    vector<int> duplicates;

    findInterSection(array1, array2, n1, n2, duplicates);
    
    if (duplicates.empty()) {
        cout << "-1";  // No intersection
    } else {
        cout << "Duplicate Elements: ";
        for (int i = 0; i < duplicates.size(); i++) {
            cout << duplicates[i] << " ";
        }
    }
    
    return 0;
}
