#include <iostream>
#include <math.h>
using namespace std;

void findDuplicates(int arr[], int size){
    for(int i = 0; i < size; i++){
        int j;
      for(j=0; j < i; j++){
          if (arr[i] == arr[j]){
              arr[i] = arr[j];
              cout << arr[j];
         }
      }
    }
}

int main() {
    int n; 
    cout << "Enter the Size of Array : ";
    cin >> n;
    int array[n];
    
    cout << "Enter the Array Elements : ";
    for(int i = 0; i < n ; i++){
        cin >> array[i];
    }
    findDuplicates(array, n);
   
    return 0;
}