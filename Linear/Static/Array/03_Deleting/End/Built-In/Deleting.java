import java.util.ArrayList;
import java.util.Arrays;

class DeletingEndBuiltIn {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(10, 20, 30, 40));
        
        System.out.println("Array before deletion");
        for (int i = 0; i < arr.size(); i++) {
            System.out.println(arr.get(i) + " ");
        }

        // Remove the last element from the array.
        arr.remove(arr.size() - 1);

        System.out.println("\nArray after deletion");
        for (int i = 0; i < arr.size(); i++) {
            System.out.println(arr.get(i) + " ");
        }
    }
}
