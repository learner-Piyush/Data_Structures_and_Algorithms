import java.util.ArrayList;
import java.util.Arrays;

class InsertingEndBuiltIn {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(10, 20, 30, 40));
        int x = 50;
        System.out.println("Array before insertion");
        for (int i = 0; i < arr.size(); i++) {
            System.out.println(arr.get(i) + " ");
        }

        // Insert x at the end.
        arr.add(x);

        System.out.println("\nArray after insertion");
        for (int i = 0; i < arr.size(); i++) {
            System.out.println(arr.get(i) + " ");
        }
    }
}
