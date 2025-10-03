import java.util.Scanner;

class DeletingGivenPositionCustom {
    public static int[] deleteAtGivenPosition(int[] arr, int pos) {
        int[] newArr = new int[arr.length - 1];

        for (int i = 0; i < pos - 1; i++) {
            newArr[i] = arr[i];
        }

        // Delete the element at the given position.
        for (int i = pos; i < arr.length; i++) {
            newArr[i - 1] = arr[i];
        }

        return newArr;
    }
    
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40};
        
        System.out.println("Array before deletion");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter a position: ");
        int pos = sc.nextInt();

        int[] newArr = deleteAtGivenPosition(arr, pos);

        sc.close();

        System.out.println("\nArray after deletion");
        for (int i = 0; i < newArr.length; i++) {
            System.out.print(newArr[i] + " ");
        }
    }
}