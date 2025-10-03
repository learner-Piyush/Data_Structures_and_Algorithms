#include <stdio.h>

void deleteAtBeginning(int arr[], int n) {
    // Shift all the elements 1 position to the left.
    // starting from second element
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    deleteAtBeginning(arr, n);
    n--;

    printf("\nArray after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}