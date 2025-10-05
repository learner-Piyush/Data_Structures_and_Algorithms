#include <stdio.h>
#include <unistd.h>

// An optimized version of Selection Sort
void selectionSort(int arr[], int n) {
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
        int temp = arr[i];
        arr[i] = arr[indexMin];
        arr[indexMin] = temp;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }    
}

int main() {
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: \n");
    printArray(arr, n);

    for (int i = 3; i > 0; i--) {
        printf("\nSorting in %d", i);
        sleep(1);
    }

    selectionSort(arr, n);
    printf("\nSorted array: \n");
    printArray(arr, n);

    return 0;
}