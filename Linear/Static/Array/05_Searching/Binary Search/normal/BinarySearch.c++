#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int x) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            return mid;         // Check if x is present at mid
        } else if (arr[mid] < x) {
            low = mid + 1;      // If x greater, ignore left half
        } else {
            high = mid - 1;     // If x is smaller, ignore right half
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

    int result = binarySearch(arr, x);
    (result == -1) ? cout << x <<" is not present in Array" : cout << x << " is present at index " << result;
    
    return 0;
}