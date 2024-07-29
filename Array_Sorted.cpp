#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int index = 0) {
    // Base case: if we have reached the end of the array or the array has one element
    if (index == n - 1 || n == 0) {
        return true;
    }
    
    // Check the current element with the next element
    if (arr[index] > arr[index + 1]) {
        return false;
    }
    
    // Recur for the rest of the array
    return isSorted(arr, n, index + 1);
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 3, 2, 4, 5};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);  
    
    cout << "Is arr1 sorted? " << (isSorted(arr1, n1) ? "Yes" : "No") << endl;
    cout << "Is arr2 sorted? " << (isSorted(arr2, n2) ? "Yes" : "No") << endl;
    
    return 0;
}
