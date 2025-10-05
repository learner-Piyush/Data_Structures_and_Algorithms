#include <stdio.h>
#include <unistd.h>

// An optimized version of Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
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
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }    
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: \n");
    printArray(arr, n);

    for (int i = 3; i > 0; i--) {
        printf("\nSorting in %d", i);
        sleep(1);
    }

    insertionSort(arr, n);
    printf("\nSorted array: \n");
    printArray(arr, n);

    return 0;
}