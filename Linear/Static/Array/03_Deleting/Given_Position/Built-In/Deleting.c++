#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};
    
    int pos;
    cout << "Array before deletion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter a position: ";
    cin >> pos;

    // Delete the element at the given position.
    arr.erase(arr.begin() + pos - 1);

    cout << "Array after deletion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}