#include <stdio.h>

int binarySearchRecursion(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            return mid;                                             // Check if x is present at mid
        } else if (arr[mid] < x) {
            return binarySearchRecursion(arr, mid + 1, high, x);    // If x greater, ignore left half
        } else {
            return binarySearchRecursion(arr, low, mid - 1, x);     // If x is smaller, ignore right half
        }
    }
    
    // If we reach here, then element was not present
    return -1;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nEnter a number to search: ");
    scanf("%d", &x);

    int result = binarySearchRecursion(arr, 0, n - 1, x);
    (result == -1) ? printf("%d is not present in Array", x) : printf("%d is present at index %d", x, result);

    return 0;
}