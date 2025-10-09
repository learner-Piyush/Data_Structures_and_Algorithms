public class QuickSort {
    // partition function
    static int partition(int[] arr, int l, int r) {
        // Choose the pivot
        int pivot = arr[l];
        int temp;

        /*i is index for larger elements that
        starts from the second element of the array
        and j is index for smaller elements that
        starts from the last element of the array*/
        int i = l + 1, j = r;

        // run the loop until i and j intercross
        while (i <= j) {
            while (i <= r && arr[i] <= pivot) {
                i++;
            }
            while (j >= l + 1 && arr[j] >= pivot) {
                j--;
            }

            // swap the elements whenever jth element < pivot < ith element
            if (i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }

        // swap pivot with jth element to place pivot at correct position
        temp = arr[j];
        arr[j] = arr[l];
        arr[l] = temp;

        return j;
    }
    static int[] quickSort(int[] arr, int l, int r) {
        if (l < r) {
            // p is the partition return index of pivot
            int p = partition(arr, l, r);

            /*recursion calls for smaller elements
            and greater or equals elements*/
            arr = quickSort(arr, l, p - 1);
            arr = quickSort(arr, p + 1, r);
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
        int[] arr = { 10, 7, 8, 9, 1, 5 };
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

        arr = quickSort(arr, 0, arr.length - 1);
        System.out.println("\nSorted array:");
        printArray(arr);
    }
}