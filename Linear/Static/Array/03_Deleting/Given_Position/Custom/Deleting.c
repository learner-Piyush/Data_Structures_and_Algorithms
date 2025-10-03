#include <stdio.h>

void deleteAtGivenPosition(int arr[], int n, int pos) {
    // Delete the element at the given position.
    for (int i = pos; i < n; i++) {
        arr[i - 1] = arr[i];
    }
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int pos;

    printf("Array before deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter a position: ");
    scanf("%d", &pos);

    deleteAtGivenPosition(arr, n, pos);
    n--;

    printf("\nArray after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}