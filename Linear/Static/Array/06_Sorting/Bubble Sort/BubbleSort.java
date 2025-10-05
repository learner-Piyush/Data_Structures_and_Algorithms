public class BubbleSort {
    // An optimized version of Bubble Sort
    static int[] bubbleSort(int[] arr) {
        int n = arr.length;
        int i, j;

        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
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
        int[] arr = { 64, 34, 25, 12, 22, 11, 90 };
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

        arr = bubbleSort(arr);
        System.out.println("\nSorted array:");
        printArray(arr);
    }
}