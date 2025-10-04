#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> arr, int x) {
    // Iterate over the array in order to
    // find the key x
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x)
        return i;
        
    }
    
    return -1;
}

int main() {
    vector<int> arr = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    int x;

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter a number to search: ";
    cin >> x;

    int result = linearSearch(arr, x);
    (result == -1) ? cout << x <<" is not present in Array" : cout << x << " is present at index " << result;
    
    return 0;
}