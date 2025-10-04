#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArrays(vector<int> arr1, vector<int> arr2) {
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;

    vector<int> arr3;
    arr3.reserve(n + m);

    // merge elements in sorted order
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            arr3.push_back(arr1[i++]);
        } else {
            arr3.push_back(arr2[j++]);
        }
        
    }

    // copy remaining elements from arr1
    while (i < n) {
        arr3.push_back(arr1[i++]);
    }

    // copy remaining elements from arr2
    while (j < m) {
        arr3.push_back(arr2[j++]);
    }

    return arr3;
}

int main() {
    vector<int> arr1 = {1, 3, 6, 10};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> arr3 = mergeArrays(arr1, arr2);

    for (int i = 0; i < arr3.size(); i++) {
        cout << arr3[i] << " ";
    }
    
    return 0;
}