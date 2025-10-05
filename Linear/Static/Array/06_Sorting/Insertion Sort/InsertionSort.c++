#include <bits/stdc++.h>
using namespace std;

// An optimized version of Insertion Sort
vector<int> insertionSort(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        
        /* Move elements of arr[0..i-1], that
        are greater than key, to one position
        ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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
    vector<int> arr = { 12, 11, 13, 5, 6 };
    cout << "Unsorted array: \n";
    printArray(arr);

    for (int i = 3; i > 0; i--) {
        cout << "\nSorting in " << i;
        this_thread::sleep_for(chrono::seconds(1));
    }

    arr = insertionSort(arr);
    cout << "\nSorted array: \n";
    printArray(arr);

    return 0;
}