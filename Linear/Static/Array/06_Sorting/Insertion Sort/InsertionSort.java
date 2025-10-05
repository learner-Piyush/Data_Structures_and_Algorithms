public class InsertionSort {
    // An optimized version of Insertion Sort
    static int[] insertionSort(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            int key = arr[i];
            int j = i - 1;
            
            /* Move elements of arr[0..i-1], that
            are greater than key, to one position
            ahead of their current position */
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
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
        int[] arr = { 12, 11, 13, 5, 6 };
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

        arr = insertionSort(arr);
        System.out.println("\nSorted array:");
        printArray(arr);
    }
}