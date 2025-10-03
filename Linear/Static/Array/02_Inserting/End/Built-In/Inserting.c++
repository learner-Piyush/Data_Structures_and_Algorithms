#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int x = 50;
    cout << "Array before insertion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    // Insert x at the end.
    arr.push_back(x);

    cout << "\nArray after insertion\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}