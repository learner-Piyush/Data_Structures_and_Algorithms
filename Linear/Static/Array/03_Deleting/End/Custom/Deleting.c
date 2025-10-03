#include <stdio.h>

void deleteAtEnd(int arr[], int n) {
    // Reduce the array size by 1.
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    deleteAtEnd(arr, n);
    n--;

    printf("\nArray after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}