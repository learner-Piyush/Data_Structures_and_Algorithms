#include <stdio.h>
#include <unistd.h>

// partition function
int partition(int arr[], int l, int r) {
    // Choose the pivot
    int pivot = arr[l];
    int temp;

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
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    // swap pivot with jth element to place pivot at correct position
    temp = arr[j];
    arr[j] = arr[l];
    arr[l] = temp;

    return j;
}

// An optimized version of Quick Sort
void quickSort(int arr[], int l, int r) {
    if (l < r) {
        // p is the partition return index of pivot
        int p = partition(arr, l, r);

        /*recursion calls for smaller elements
        and greater or equals elements*/
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, r);
    }
    
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }    
}

int main() {
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: \n");
    printArray(arr, n);

    for (int i = 3; i > 0; i--) {
        printf("\nSorting in %d", i);
        sleep(1);
    }

    quickSort(arr, 0, n - 1);
    printf("\nSorted array: \n");
    printArray(arr, n);

    return 0;
}