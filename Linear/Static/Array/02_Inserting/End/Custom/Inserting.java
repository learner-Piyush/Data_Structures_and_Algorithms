class InsertingEndCustom {
    public static int[] insertAtEnd(int[] arr, int x) {
        int[] newArr = new int[arr.length + 1];
        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }

        // Insert x at the end.
        newArr[arr.length] = x;

        return newArr;
    }
    
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40};
        int x = 50;
        System.out.println("Array before insertion");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        int[] newArr = insertAtEnd(arr, x);

        System.out.println("\nArray after insertion");
        for (int i = 0; i < newArr.length; i++) {
            System.out.print(newArr[i] + " ");
        }
    }
}