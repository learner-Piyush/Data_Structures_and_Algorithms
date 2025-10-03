#include <iostream>
#include <vector>
using namespace std;

vector<int> insertAtEnd(vector<int> arr, int x) {
    arr.resize(arr.size() + 1);

    // Insert x at the end.
    arr[arr.size() - 1] = x;
    
    return arr;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int x = 50;
    cout << "Array before insertion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    vector<int> newArr = insertAtEnd(arr, x);

    cout << "\nArray after insertion\n";
    for (int i = 0; i < newArr.size(); i++) {
        cout << newArr[i] << " ";
    }
    
    return 0;
}