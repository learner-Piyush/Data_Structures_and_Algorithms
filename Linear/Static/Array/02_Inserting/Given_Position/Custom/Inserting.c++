#include <iostream>
#include <vector>
using namespace std;

vector<int> insertAtGivenPosition(vector<int> arr, int x, int pos) {
    arr.resize(arr.size() + 1);
    
    // Shift elements to the right.
    for (int i = arr.size() - 1; i > pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert x at the index pos - 1.
    arr[pos - 1] = x;

    return arr;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int x = 50;
    int pos;
    cout << "Array before insertion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter a position: ";
    cin >> pos;

    vector<int> newArr = insertAtGivenPosition(arr, x, pos);

    cout << "\nArray after insertion\n";
    for (int i = 0; i < newArr.size(); i++) {
        cout << newArr[i] << " ";
    }
    
    return 0;
}