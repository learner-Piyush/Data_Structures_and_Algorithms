public class MergeSort {

    // Merges two subarrays of arr[]
    // First subarray is arr[l...m]
    // Second subarray is arr[m+1...r]
    static int[] merge(int[] arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;

        // Create temp arrays
        int[] L = new int[n1];
        int[] R = new int[n2];
        int[] ARR = new int[n1 + n2];

        // Copy data to temp arrays L[] and R[]
        for (int i = 0; i < n1; i++) {
            L[i] = arr[l + i];
        }
        for (int i = 0; i < n2; i++) {
            R[i] = arr[m + 1 + i];
        }
        
        // Merge the temp arrays back into arr[left...right]
        int i = 0, j = 0, k = 0;

        // merge elements in sorted order
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                ARR[k++] = L[i++];
            } else {
                ARR[k++] = R[j++];
            }
            
        }

        /* copy the remaining elements
        of L[], if there are any */
        while (i < n1) {
            ARR[k++] = L[i++];
        }
        
        /* copy the remaining elements
        of R[], if there are any */
        while (j < n2) {
            ARR[k++] = R[j++];
        }

        for (int z = 0; z < ARR.length; z++)
        {
            arr[l + z] = ARR[z];
        }

        return arr;
    }
    static int[] mergeSort(int[] arr, int l, int r) {
        if (l < r) {
            int m = (l + r) / 2;
            arr = mergeSort(arr, l, m);
            arr = mergeSort(arr, m + 1, r);
            arr = merge(arr, l, m, r);
        }

        return arr;
    }

    // Function to print an array
    static void printArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] arr = { 38, 27, 43, 10 };
        System.out.println("Unsorted array:");
        printArray(arr);

        for (int i = 3; i > 0; i--) {
            System.out.print("\nSorting in " + i);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        arr = mergeSort(arr, 0, arr.length - 1);
        System.out.println("\nSorted array:");
        printArray(arr);
    }
}