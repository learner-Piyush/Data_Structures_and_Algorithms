class DeletingBeginningCustom {
    public static int[] deleteAtBeginning(int[] arr) {
        int[] newArr = new int[arr.length - 1];

        // Shift all the elements 1 position to the left.
        // starting from second element
        for (int i = 1; i < arr.length; i++) {
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

        int[] newArr = deleteAtBeginning(arr);

        System.out.println("\nArray after deletion");
        for (int i = 0; i < newArr.length; i++) {
            System.out.print(newArr[i] + " ");
        }
    }
}