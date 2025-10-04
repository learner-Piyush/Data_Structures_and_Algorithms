#include <iostream>
#include <vector>
using namespace std;

int binarySearchRecursion(vector<int> arr, int low, int high, int x) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            return mid;                                             // Check if x is present at mid
        } else if (arr[mid] < x) {
            return binarySearchRecursion(arr, mid + 1, high, x);    // If x greater, ignore left half
        } else {
            return binarySearchRecursion(arr, low, mid - 1, x);     // If x is smaller, ignore right half
        }
    }
    
    // If we reach here, then element was not present
    return -1;
}

int main() {
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x;

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter a number to search: ";
    cin >> x;

    int result = binarySearchRecursion(arr, 0, arr.size() - 1, x);
    (result == -1) ? cout << x <<" is not present in Array" : cout << x << " is present at index " << result;
    
    return 0;
}