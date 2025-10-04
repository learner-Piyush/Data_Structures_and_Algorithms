# Searching an Element in an Array

Searching means to find whether a particular value is present in an array or not. If the value is present in the array, then searching is said to be successful and the searching process gives the location of that value in the array. However, if the value is not present in the array, the searching process displays an appropriate message and in this case searching is said to be unsuccessful. There are two popular methods of searching the array elements: *linear search* and *binary search*. The algorithm that should be used depends entirely on how the values are organized in the array.

# Linear Search

Linear search, also called as *sequential search*, is a very simple method used for searching an array for a particular value. It works by comparing the value to be searched with the every element of the array one by 1 in a sequence until a match is found. Linear search is mostly used to search an unordered list of elements (array in which data elements are not sorted).

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20240902185521/Linear-search-algorithm-1.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20240902185522/Linear-search-algorithm-2.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20240902185522/Linear-search-algorithm-3.webp">

**Algorithm for linear search**
```
LINEAR_SEARCH(A, N, VAL)

Step 1: [INITIALIZE] SET POS = -1
Step 2: [INITIALIZE] SET I = 1
Step 3: Repeat Step 4 while I <= N
Step 4:     IF A[I] = VAL
                SET POS = I
                PRINT POS
                Go to Step 6
            [END OF IF]
            SET I = I + 1
        [END OF LOOP]
Step 5: IF POS = -1
            PRINT "VALUE IS NOT PRESENT IN THE ARRAY"
        [END OF IF]
Step 6: EXIT
```

In Steps 1 and 2 of the algorithm, we initialize the value of `POS` and `I`.

In Step 3, a `while` loop is executed that would be executed till `I` is less than `N` (total number of elements in the array).

In Step 4, a check is made to see if a match is found between the current array element and `VAL`. If a match is found, then the position of the array element is printed, else the valu of `I` is incremented to match the next element with `VAL`. However, if all the array elements have been compared with `VAL` and no match is found, then it means the `VAL` is not present in the array.

## Complexity of Linear Search Algorithm

Search executes in O(n) time where n is the number of elements in the array. Obviously, the best case of linear search is when `VAL` is equals to the first element of the array. In this case, only one comparison will be made. Likewise, the worst case will happen when either `VAL` is not present in the array or it is equals to the last element of the array. In both the cases, n comparison will have to be made. However, the performance of the linear search algorithm can be improved by using a sorted array.

| Case | Time Complexity | Reasoning |
|---|---|---|
| Best Case | O(1) | Target is the first element, only 1 comparison needed. |
| Average Case | O(n) | On average, the target will be in the middle, requiring ~n/2 comparisons → O(n). |
| Worst Case | O(n) | Target is the last element or not present, requiring n comparisons. |

# Binary Search

Binary search is a searching algorithm that works efficiently with a sorted list. The mechanism of binary search can be better understood by an analogy of a telephone directory. When we are searching for a particular name in a directory, we first open the directory from the middle and then decide whether to look the name in the first part of the directory or in the second part of the directory. Again, we open some page in the middle and the whole process is repeated until we finally find the right name. Take another analogy. How do we find words in a dictionary? We first open the dictionary somewhere in the middle. Then we compare the first word on the page with the desired word whose meaning we are looking for. If the desired world comes before the word on the page, we look in the first half of the dictionary, else we look in the second half. Again, we open a page in the first half of the dictionary and compare the first word on that page with the desired word and repeat the same procedure until we finally get the word. The same mechanism is applied in the binary search.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250219155359690903/Binary-Search-1.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250219155359020153/Binary-Search-2.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250219155358414164/Binary-Search-3.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250219155357890968/Binary-Search-4.png">

**Algorithm for binary search**
```
BINARY_SEARCH(A, lower_bound, upper_bound, VAL)

Step 1: [INITIALIZE] SET BEG = lower_bound, END = upper_bound, POS = -1
Step 2: Repeat Step 3 and 4 while BEG <= END
Step 3:     SET MID = (BEG + END) / 2
Step 4:     IF A[MID] = VAL
                SET POS = MID
                PRINT POS
                Go to Step 6
            ELSE IF A[MID] < VAL
                SET BEG = MID + 1
            ELSE
                SET END = MID - 1
            [END OF IF]
        [END OF LOOP]
Step 5: IF POS = -1
            PRINT "VALUE IS NOT PRESENT IN THE ARRAY"
        [END OF IF]
Step 6: EXIT
```

In Step 1, we initialize the value of the variables `BEG`, `END` and `POS`.

In Step 2, a `while` loop is executed until BEG is less than or equals to END.

In Step 3, the value of `MID` is calculated.

In Step 4, we check if the array value at mid is equals to `VAL` (item to be searched in the array). If a match is found, then the value of `POS` is printed and the algorithm exists. However, if a match is not found and if the value of `A[MID]` is greater than `VAL`, the value of `END` is modified, otherwise if `A[MID]` is greater than `VAL`, the value of `BEG` is altered.

In Step 5, if the value of `POS = -1`, the `VAL` is not present in the array and an appropriate message is printed on the screen before the algorithm exists.

## Complexity of Binary Search Algorithm

The complexity of the binary search algorithm can be expressed as f(n), where n is the number of elements in the array. the complexity of the algorithm is calculated depending on the number of comparisons that are made. In binary search algorithm, we see that with each comparison, the size of the segment where search has to be made is reduced to half. Thus, we can say that, in order to locate a particular value in the array, the total number of comparison that will be made is given as f(n) = log<sub>2</sub>n

| Case | Time Complexity | Reasoning |
|---|---|---|
| Best Case | O(1) | Target is the middle element on the first comparison. |
| Average Case | O(log n) | Each step halves the search space; about log<sub>2</sub>n steps expected. |
| Worst Case | O(log n) | Continue halving until 1 element remains &rarr; log<sub>2</sub>n comparisons. |