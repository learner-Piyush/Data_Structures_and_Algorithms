#include <stdio.h>

void insertAtGivenPosition(int arr[], int n, int x, int pos) {
    // Shift elements to the right.
    for (int i = n - 1; i > pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert x at the index pos - 1.
    arr[pos - 1] = x;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 50;
    int pos;

    printf("Array before insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter a position: ");
    scanf("%d", &pos);

    insertAtGivenPosition(arr, n, x, pos);
    n++;

    printf("\nArray after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}