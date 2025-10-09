#include <stdio.h>
#include <unistd.h>

// Merges two subarrays of arr[]
// First subarray is arr[l...m]
// Second subarray is arr[m+1...r]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[m + 1 + i];
    }
    
    // Merge the temp arrays back into arr[left...right]
    int i = 0, j = 0, k = l;

    // merge elements in sorted order
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
        
    }
    
    /* copy the remaining elements
    of L[], if there are any */
    while (i < n1) {
        arr[k++] = L[i++];
    }
    
    /* copy the remaining elements
    of R[], if there are any */
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
    
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }    
}

int main() {
    int arr[] = { 38, 27, 43, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: \n");
    printArray(arr, n);

    for (int i = 3; i > 0; i--) {
        printf("\nSorting in %d", i);
        sleep(1);
    }

    mergeSort(arr, 0, n - 1);
    printf("\nSorted array: \n");
    printArray(arr, n);

    return 0;
}