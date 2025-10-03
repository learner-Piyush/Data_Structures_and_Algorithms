import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

class InsertingGivenPositionBuiltIn {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(10, 20, 30, 40));
        int x = 50;
        System.out.println("Array before insertion");
        for (int i = 0; i < arr.size(); i++) {
            System.out.println(arr.get(i) + " ");
        }

        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter a position: ");
        int pos = sc.nextInt();

        // Insert x at the given position.
        arr.add(pos - 1, x);

        sc.close();

        System.out.println("\nArray after insertion");
        for (int i = 0; i < arr.size(); i++) {
            System.out.println(arr.get(i) + " ");
        }
    }
}
