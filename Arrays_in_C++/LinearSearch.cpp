// Linear Search
#include <iostream>
using namespace std;

int search(int arr[], int size, int key){
    for (int i=0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return 0;
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
    int num;
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    int found = search(arr, n, num);
    if (found) {
    cout << "\nFound at Index No." << found;
    }
    else {
        cout << "Key is Absent" << endl;
    }

    return 0;
}