#include <iostream>
#include <vector>
using namespace std;

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

    // Insert x at the given position.
    arr.insert(arr.begin() + pos - 1, x);

    cout << "Array after insertion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}