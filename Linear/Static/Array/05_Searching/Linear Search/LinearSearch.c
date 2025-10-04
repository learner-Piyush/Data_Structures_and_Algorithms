#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    // Iterate over the array in order to
    // find the key x
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
        return i;
        
    }
    
    return -1;
}

int main() {
    int arr[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nEnter a number to search: ");
    scanf("%d", &x);

    int result = linearSearch(arr, n, x);
    (result == -1) ? printf("%d is not present in Array", x) : printf("%d is present at index %d", x, result);

    return 0;
}