import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

class DeletingGivenPositionBuiltIn {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(10, 20, 30, 40));
        
        System.out.println("Array before deletion");
        for (int i = 0; i < arr.size(); i++) {
            System.out.println(arr.get(i) + " ");
        }

        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter a position: ");
        int pos = sc.nextInt();

        // Delete the element at the given position.
        arr.remove(pos - 1);

        sc.close();

        System.out.println("\nArray after deletion");
        for (int i = 0; i < arr.size(); i++) {
            System.out.println(arr.get(i) + " ");
        }
    }
}
