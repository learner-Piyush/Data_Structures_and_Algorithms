#include <bits/stdc++.h>
using namespace std;

// Merges two subarrays of arr[]
// First subarray is arr[l...m]
// Second subarray is arr[m+1...r]
vector<int> merge(vector<int> arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    vector<int> L(n1), R(n2), ARR;

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[m + 1 + i];
    }
    
    // Merge the temp arrays back into arr[left...right]
    int i = 0, j = 0;

    // merge elements in sorted order
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            ARR.push_back(L[i++]);
        } else {
            ARR.push_back(R[j++]);
        }
        
    }

    /* copy the remaining elements
    of L[], if there are any */
    while (i < n1) {
        ARR.push_back(L[i++]);
    }

    /* copy the remaining elements
    of L[], if there are any */
    while (j < n2) {
        ARR.push_back(R[j++]);
    }

    for (int i = 0; i < ARR.size(); i++)
    {
        arr[l + i] = ARR[i];
    }
    
    return arr;
}

vector<int> mergeSort(vector<int> arr, int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        arr = mergeSort(arr, l, m);
        arr = mergeSort(arr, m + 1, r);
        arr = merge(arr, l, m, r);
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
    vector<int> arr = { 38, 27, 43, 10 };
    cout << "Unsorted array: \n";
    printArray(arr);

    for (int i = 3; i > 0; i--) {
        cout << "\nSorting in " << i;
        this_thread::sleep_for(chrono::seconds(1));
    }

    arr = mergeSort(arr, 0, arr.size() - 1);
    cout << "\nSorted array: \n";
    printArray(arr);

    return 0;
}