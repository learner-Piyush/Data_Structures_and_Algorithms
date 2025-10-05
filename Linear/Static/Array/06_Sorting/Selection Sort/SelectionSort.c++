#include <bits/stdc++.h>
using namespace std;

// An optimized version of Selection Sort
vector<int> selectionSort(vector<int> arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        /* Assume the current position
        holds the minimum element */
        int indexMin = i;

        /* Iterate through the unsorted
        portion to find the actual minimum */
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[indexMin])
            indexMin = j;   // Update indexMin if a smaller element is found
        }

        /* Move minimum element
        to its correct position */
        swap(arr[i], arr[indexMin]);
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
    vector<int> arr = { 64, 25, 12, 22, 11 };
    cout << "Unsorted array: \n";
    printArray(arr);

    for (int i = 3; i > 0; i--) {
        cout << "\nSorting in " << i;
        this_thread::sleep_for(chrono::seconds(1));
    }

    arr = selectionSort(arr);
    cout << "\nSorted array: \n";
    printArray(arr);

    return 0;
}