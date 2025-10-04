import java.util.Scanner;

public class recursiveBinarySearch {
    public static int binarySearchRecursion(int arr[], int low, int high, int x) {
        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == x) {
                return mid;                                             // Check if x is present at mid
            } else if (arr[mid] < x) {
                return binarySearchRecursion(arr, mid + 1, high, x);    // If x greater, ignore left half
            } else {
                return binarySearchRecursion(arr, low, mid - 1, x);     // If x is smaller, ignore right half
            }
        }

        // If we reach here, then element was not present
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter a number to search: ");
        int x = sc.nextInt();
        sc.close();

        int result = binarySearchRecursion(arr, 0, arr.length, x);
        System.out.println((result == -1) ? x + " is not present in Array" : x + " is present at index "+ result);
    }
}