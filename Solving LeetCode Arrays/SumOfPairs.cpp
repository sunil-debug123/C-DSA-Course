#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findPairs(int arr[], int size, vector<pair<int, int>>& pairs, int sum) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == sum) {
                pairs.push_back(make_pair(min(arr[i], arr[j]), max(arr[i], arr[j])));
            }
        }
    }
}

int main() {
    int n; 
    cout << "Enter the Size of Array: ";
    cin >> n;
    int array[n]; 
    
    cout << "Enter the Array Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    int targetSum;
    cout << "Enter the Target Sum: ";
    cin >> targetSum;
    
    vector<pair<int, int>> pairs;

    findPairs(array, n, pairs, targetSum);
    
    cout << "Pairs Elements are: ";
    for (int i = 0; i < pairs.size(); i++) {
        cout << "(" << pairs[i].first << ", " << pairs[i].second << ") ";
    }

    return 0;
}
