class InsertingBeginningCustom {
    public static int[] insertAtBeginning(int[] arr, int x) {
        int[] newArr = new int[arr.length + 1];

        // Shift elements to the right.
        for (int i = arr.length - 1; i >= 0; i--) {
            newArr[i + 1] = arr[i];
        }

        // Insert x at the beginning.
        newArr[0] = x;

        return newArr;
    }
    
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40};
        int x = 50;
        System.out.println("Array before insertion");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        int[] newArr = insertAtBeginning(arr, x);

        System.out.println("\nArray after insertion");
        for (int i = 0; i < newArr.length; i++) {
            System.out.print(newArr[i] + " ");
        }
    }
}