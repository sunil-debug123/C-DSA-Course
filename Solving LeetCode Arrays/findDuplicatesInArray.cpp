#include <iostream>
#include <vector>
using namespace std;

void findDuplicates(int arr[], int size, vector<int>& duplicates) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicates.push_back(arr[i]);
                break; // Once a duplicate is found, no need to check further
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
    
    vector<int> duplicates;

    findDuplicates(array, n, duplicates);

    cout << "Duplicate Elements: ";
    for (int i = 0; i < duplicates.size(); i++) {
        cout << duplicates[i] << " ";
    }
   
    return 0;
}

#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    
    //XOR ing all array elements
    for(int i = 0; i<arr.size(); i++ ) {
    	ans = ans^arr[i];
    }
	
    //XOR [1, n-1]
    for(int i = 1; i<arr.size();i++ ) {
    	ans = ans^i;
    }
    return ans;
}