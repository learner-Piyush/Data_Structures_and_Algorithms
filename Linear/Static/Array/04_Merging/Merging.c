#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int n, int m, int arr3[]) {
    int i = 0, j = 0, k = 0;

    // merge elements in sorted order
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
        
    }
    
    // copy remaining elements from arr1
    while (i < n) {
        arr3[k++] = arr1[i++];
    }
    
    // copy remaining elements from arr2
    while (j < m) {
        arr3[k++] = arr2[j++];
    }
    
}

int main() {
    int arr1[] = {1, 3, 6, 10};
    int arr2[] = {2, 4, 6, 8};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n + m];
    mergeArrays(arr1, arr2, n, m, arr3);

    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}