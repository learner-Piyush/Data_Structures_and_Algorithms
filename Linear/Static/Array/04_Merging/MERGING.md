# Merge two sorted arrays

Merging two sorted arrays means combining the elements of two different sorted arrays into a single array, such that the resulting array is also sorted.

This operation is very common in algorithms, particularly in the **Merge Sort** technique, where smaller sorted arrays are merged step by step to form a larger sorted array.

Since both arrays are already sorted, the merging process becomes straightforward. By comparing elements one by one and picking the smaller element first, we ensure that the final array remains sorted.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250228112957889759/Merge-two-sorted-arrays_.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250228112957319462/Merge-two-sorted-arrays-1.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250228112957513895/Merge-two-sorted-arrays-2-.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250228112957706078/Merge-two-sorted-arrays-3-.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250228112956801306/Merge-two-sorted-arrays-4-.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250228112956156505/Merge-two-sorted-arrays-5-.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250228112957069584/Merge-two-sorted-arrays-6-.webp">

**Algorithm for merging two sorted arrays**

```
Step 1: [Initialization] 
        SET i = 0, j = 0, k = 0
        (where i is index of arr1, j is index of arr2, and k is index of arr3)

Step 2: Repeat steps 3–4 while i < n and j < m
Step 3: If arr1[i] <= arr2[j], then
            arr3[k] = arr1[i]
            i = i + 1
        Else
            arr3[k] = arr2[j]
            j = j + 1
Step 4: k = k + 1
        [END OF LOOP]

Step 5: Copy any remaining elements of arr1 into arr3
Step 6: Copy any remaining elements of arr2 into arr3
Step 7: EXIT
```

In Step 1, we initialize three pointers `i`, `j`, and `k` to the starting indices of the two input arrays and the merged array.

In Steps 2–4, both arrays are traversed simultaneously. At each step, the smaller of the two current elements is placed into the merged array. This continues until one array is fully traversed.

In Steps 5 and 6, the remaining elements (if any) from the unfinished array are directly copied into the merged array, since they are already sorted.

The result is a new sorted array containing all elements from both input arrays.
