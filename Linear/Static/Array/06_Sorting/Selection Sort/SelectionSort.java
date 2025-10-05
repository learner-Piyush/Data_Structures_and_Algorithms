public class SelectionSort {
    // An optimized version of Selection Sort
    static int[] selectionSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {

            /* Assume the current position
            holds the minimum element */
            int indexMin = i;

            /* Iterate through the unsorted
            portion to find the actual minimum */
            for (int j = i; j < n; j++) {
                if (arr[j] < arr[indexMin])
                indexMin = j;   // Update indexMin if a smaller element is found
            }

            /* Move minimum element
            to its correct position */
            int temp = arr[i];
            arr[i] = arr[indexMin];
            arr[indexMin] = temp;
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
        int[] arr = { 64, 25, 12, 22, 11 };
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

        arr = selectionSort(arr);
        System.out.println("\nSorted array:");
        printArray(arr);
    }
}