import java.util.Scanner;

class InsertingGivenPositionCustom {
    public static int[] insertAtGivenPosition(int[] arr, int x, int pos) {
        int[] newArr = new int[arr.length + 1];

        for (int i = 0; i <= pos; i++) {
            newArr[i] = arr[i];
        }

        // Shift elements to the right.
        for (int i = arr.length - 1; i >= pos; i--) {
            newArr[i + 1] = arr[i];
        }

        // Insert x at the index pos - 1.
        newArr[pos - 1] = x;

        return newArr;
    }
    
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40};
        int x = 50;
        System.out.println("Array before insertion");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter a position: ");
        int pos = sc.nextInt();

        int[] newArr = insertAtGivenPosition(arr, x, pos);

        sc.close();

        System.out.println("\nArray after insertion");
        for (int i = 0; i < newArr.length; i++) {
            System.out.print(newArr[i] + " ");
        }
    }
}