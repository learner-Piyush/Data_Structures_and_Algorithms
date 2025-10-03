public class Traversing {

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int n = arr.length;

        System.out.println("Linear Traversal: ");
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i] + " ");
        }
        System.out.println();

        System.out.println("Reverse Traversal: ");
        for (int i = n - 1; i >= 0; i--) {
            System.out.println(arr[i] + " ");
        }
        System.out.println();
    }
}