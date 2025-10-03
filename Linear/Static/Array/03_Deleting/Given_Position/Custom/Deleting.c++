#include <iostream>
#include <vector>
using namespace std;

vector<int> deleteAtBeginning(vector<int> arr, int pos) {
    // Delete the element at the given position.
    for (int i = pos; i < arr.size(); i++) {
        arr[i - 1] = arr[i];
    }

    arr.resize(arr.size() - 1);
    
    return arr;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    
    int pos;
    cout << "Array before deletion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter a position: ";
    cin >> pos;

    vector<int> newArr = deleteAtBeginning(arr, pos);

    cout << "\nArray after deletion\n";
    for (int i = 0; i < newArr.size(); i++) {
        cout << newArr[i] << " ";
    }
    
    return 0;
}