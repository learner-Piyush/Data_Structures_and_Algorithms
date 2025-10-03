#include <iostream>
#include <vector>
using namespace std;

vector<int> deleteAtEnd(vector<int> arr) {
    // Reduce the array size by 1.
    arr.resize(arr.size() - 1);
    
    return arr;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    
    cout << "Array before deletion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    vector<int> newArr = deleteAtEnd(arr);

    cout << "\nArray after deletion\n";
    for (int i = 0; i < newArr.size(); i++) {
        cout << newArr[i] << " ";
    }
    
    return 0;
}