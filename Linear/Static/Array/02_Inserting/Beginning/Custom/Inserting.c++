#include <iostream>
#include <vector>
using namespace std;

vector<int> insertAtBeginning(vector<int> arr, int x) {
    arr.resize(arr.size() + 1);
    
    // Shift elements to the right.
    for (int i = arr.size() - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert x at the beginning.
    arr[0] = x;

    return arr;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int x = 50;
    cout << "Array before insertion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    vector<int> newArr = insertAtBeginning(arr, x);

    cout << "\nArray after insertion\n";
    for (int i = 0; i < newArr.size(); i++) {
        cout << newArr[i] << " ";
    }
    
    return 0;
}