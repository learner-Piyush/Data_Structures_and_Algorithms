#include <iostream>
#include <vector>
using namespace std;

vector<int> deleteAtBeginning(vector<int> arr) {
    // Shift all the elements 1 position to the left.
    // starting from second element
    for (int i = 1; i < arr.size(); i++) {
        arr[i - 1] = arr[i];
    }

    arr.resize(arr.size() - 1);

    return arr;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    
    cout << "Array before deletion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    vector<int> newArr = deleteAtBeginning(arr);

    cout << "\nArray after deletion\n";
    for (int i = 0; i < newArr.size(); i++) {
        cout << newArr[i] << " ";
    }
    
    return 0;
}