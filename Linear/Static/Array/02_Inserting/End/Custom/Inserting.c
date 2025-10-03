#include <stdio.h>

void insertAtEnd(int arr[], int n, int x) {
    // Insert x at the end.
    arr[n] = x;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 50;

    printf("Array before insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    insertAtEnd(arr, n, x);
    n++;

    printf("\nArray after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}