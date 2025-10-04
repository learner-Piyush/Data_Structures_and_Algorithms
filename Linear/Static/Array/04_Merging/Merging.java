public class Merging {
    static int[] mergeArrays(int[] arr1, int[] arr2) {
        int n = arr1.length;
        int m = arr2.length;
        int i = 0, j = 0, k = 0;

        int[] arr3 = new int[n + m];

        // merge elements in sorted order
        while (i < n && j < m) {
            if (arr1[i] <= arr2[j]) {
                arr3[k++] = arr1[i++];
            } else {
                arr3[k++] = arr2[j++];
            }
            
        }

        // copy remaining elements from arr1
        while (i < n) {
            arr3[k++] = arr1[i++];
        }
        
        // copy remaining elements from arr2
        while (j < m) {
            arr3[k++] = arr2[j++];
        }

        return arr3;
    }

    public static void main(String[] args) {
        int[] arr1 = {1, 3, 6, 10};
        int[] arr2 = {2, 4, 6, 8};
        
        int[] arr3 = mergeArrays(arr1, arr2);

        for (int i = 0; i < arr3.length; i++) {
            System.out.print(arr3[i] + " ");
        }
    }
}