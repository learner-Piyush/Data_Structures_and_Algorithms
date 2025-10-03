#include <stdio.h>

void insertAtBeginning(int arr[], int n, int x) {
    // Shift elements to the right.
    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert x at the beginning.
    arr[0] = x;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 50;

    printf("Array before insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    insertAtBeginning(arr, n, x);
    n++;

    printf("\nArray after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}