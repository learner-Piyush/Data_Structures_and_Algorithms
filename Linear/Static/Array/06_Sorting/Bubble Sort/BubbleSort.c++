#include <bits/stdc++.h>
using namespace std;

// An optimized version of Bubble Sort
vector<int> bubbleSort(vector<int> arr) {
    int n = arr.size();
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    return arr;
}

// Function to print an array
void printArray(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }    
}

int main() {
    vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    cout << "Unsorted array: \n";
    printArray(arr);

    for (int i = 3; i > 0; i--) {
        cout << "\nSorting in " << i;
        this_thread::sleep_for(chrono::seconds(1));
    }

    arr = bubbleSort(arr);
    cout << "\nSorted array: \n";
    printArray(arr);

    return 0;
}