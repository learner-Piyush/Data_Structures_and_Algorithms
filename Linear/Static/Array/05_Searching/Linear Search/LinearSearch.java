import java.util.Scanner;

public class LinearSearch {
    public static int linearSearch(int[] arr, int x) {
        // Iterate over the array in order to
        // find the key x
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x)
            return i;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter a number to search: ");
        int x = sc.nextInt();
        sc.close();

        int result = linearSearch(arr, x);
        System.out.println((result == -1) ? x + " is not present in Array" : x + " is present at index "+ result);
    }
}