#include <iostream>
using namespace std;

int findPeakInMountain(int arr[], int size) {
    int start = 0;
    int end = size - 1;
	while (start < end)
	{
	   int mid= start + (end - start) / 2;
		if(arr[mid] < arr[mid+1]){
     		start=mid+1;
		}
    	else {
         	end = mid;
    	}
    
	}
	return arr[start];
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
    
    cout << "Peak Element is: " << findPeakInMountain(arr,n);

    return 0;
}
