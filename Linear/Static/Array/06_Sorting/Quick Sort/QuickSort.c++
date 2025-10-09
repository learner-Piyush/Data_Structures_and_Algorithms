#include <bits/stdc++.h>
using namespace std;

// partition function
pair<vector<int>, int> partition(vector<int> arr, int l, int r) {
    // Choose the pivot
    int pivot = arr[l];

    /*i is index for larger elements that
    starts from the second element of the array
    and j is index for smaller elements that
    starts from the last element of the array*/
    int i = l + 1, j = r;

    // run the loop until i and j intercross
    while (i <= j) {
        while (i <= r && arr[i] <= pivot) {
            i++;
        }
        while (j >= l + 1 && arr[j] >= pivot) {
            j--;
        }

        // swap the elements whenever jth element < pivot < ith element
        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // swap pivot with jth element to place pivot at correct position
    swap(arr[j], arr[l]);

    return {arr, j};
}

vector<int> quickSort(vector<int> arr, int l, int r) {
    if (l < r) {
        auto result = partition(arr, l, r);
        // p is the partition return index of pivot
        int p = result.second;

        /*recursion calls for smaller elements
        and greater or equals elements*/
        arr = result.first;
        arr = quickSort(arr, l, p - 1);
        arr = quickSort(arr, p + 1, r);
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
    vector<int> arr = { 10, 7, 8, 9, 1, 5 };
    cout << "Unsorted array: \n";
    printArray(arr);

    for (int i = 3; i > 0; i--) {
        cout << "\nSorting in " << i;
        this_thread::sleep_for(chrono::seconds(1));
    }

    arr = quickSort(arr, 0, arr.size() - 1);
    cout << "\nSorted array: \n";
    printArray(arr);

    return 0;
}