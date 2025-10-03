class DeletingEndCustom {
    public static int[] deleteAtEnd(int[] arr) {
        // Reduce the array size by 1.
        int[] newArr = new int[arr.length - 1];
        for (int i = 0; i < newArr.length; i++) {
            newArr[i] = arr[i];
        }

        return newArr;
    }
    
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40};
        
        System.out.println("Array before deletion");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        int[] newArr = deleteAtEnd(arr);

        System.out.println("\nArray after deletion");
        for (int i = 0; i < newArr.length; i++) {
            System.out.print(newArr[i] + " ");
        }
    }
}