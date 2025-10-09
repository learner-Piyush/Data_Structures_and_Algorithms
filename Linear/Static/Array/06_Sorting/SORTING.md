# Sorting an Array

Sorting means arranging the elements of an array so that they are placed in some relevant order which may be either ascending or descending. That is, if A is an array, then the elements of A are arranged in a sorted order (ascending order) in such a way that A[0] < A[1] < A[2] < ...... < A[N].

For example, if we have an array that is declared and initialized as int A[] = {21, 34, 11, 9, 1, 0, 22};

Then the sorted array (ascending order) can be given as: A[] = {0, 1, 9, 11, 21, 22, 34};

# [Bubble Sort](/Linear/Static/Array/06_Sorting/Bubble%20Sort/)

Bubble sort is a very simple method that sorts the array elements by repeatedly moving the largest element to the highest index position of the array segment (in case of arranging elements in ascending order). In bubble sorting, consecutive adjacent pairs of elements in the array are compared with each other. If the element at the lower index is greater than the element at the higher index, the two elements are interchanged so that the element is placed before the bigger one. This process will continue till the list of unsorted elements exhausts.

## Technique

The basic methodology of the working of bubble sort is given as follows:
- In Pass 1, A[0] and A[1] are compared, then A[1] is compared with A[2], A[2] is compared with A[3], and so on. Finally, A[N–2] is compared with A[N–1]. Pass 1 involves n–1 comparisons and places the biggest element at the highest index of the array.
- In Pass 2, A[0] and A[1] are compared, then A[1] is compared with A[2], A[2] is compared with A[3], and so on. Finally, A[N–3] is compared with A[N–2]. Pass 2 involves n–2 comparisons and places the second biggest element at the second highest index of the array.
- In Pass 3, A[0] and A[1] are compared, then A[1] is compared with A[2], A[2] is compared with A[3], and so on. Finally, A[N–4] is compared with A[N–3]. Pass 3 involves n–3 comparisons and places the third biggest element at the third highest index of the array.
- In Pass n–1, A[0] and A[1] are compared so that A[0]<A[1]. After this step, all the elements ofthe array are arranged in ascending order.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718114642038463/bubble-sort-1.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718114641767806/bubble-sort-2.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718114641916133/bubble-sort-3.webp">

**Algorithm for bubble sort**
```
BUBBLE_SORT(A, N)

Step 1: Repeat Step 2 For I = 0 to N-1
Step 2:     Repeat For J = 0 to N-I
Step 3:         IF A[J] > A[J + 1]
                SWAP A[J] and A[J + 1]
            [END OF INNER LOOP]
        [END OF OUTER LOOP]
Step 4: EXIT
```

In this algorithm, the outer loop is for the total number of passes which is `N–1`. The inner loop will be executed for every pass. However, the frequency of the inner loop will decrease with every pass because after every pass, one element will be in its correct position. Therefore, for every pass, the inner loop will be executed N–I times, where `N` is the number of elements in the array and `I` is the count of the pass.

## Complexity of Bubble Sort

The complexity of any sorting algorithm depends upon the number of comparisons. In bubble sort, we have seen that there are `N–1` passes in total. In the first pass, `N–1` comparisons are made to place the highest element in its correct position. Then, in Pass 2, there are `N–2` comparisons and the second highest element is placed in its position. Therefore, to compute the complexity of bubble sort, we need to calculate the total number of comparisons. It can be given as:

f(n) = (n – 1) + (n – 2) + (n – 3) + ..... + 3 + 2 + 1

f(n) = n (n – 1)/2

f(n) = n<sup>2</sup>/2 + O(n) = O(n<sup>2</sup>)

Therefore, the complexity of bubble sort algorithm is O(n<sup>2</sup>). It means the time required to execute bubble sort is proportional to n<sup>2</sup>, where n is the total number of elements in the array.

| Case | Time Complexity | Reasoning |
|---|---|---|
| Best Case | O(n) | When the array is already sorted, only one pass is needed with no swaps &rarr; O(n). |
| Average Case | O(n<sup>2</sup>) | About half of the elements are out of place, requiring ~n<sup>2</sup>/2 comparisons and swaps &rarr; O(n<sup>2</sup>). |
| Worst Case | O(n<sup>2</sup>) | Reversed order requires maximum comparisons and swaps &rarr; O(n<sup>2</sup>). |

# [Insertion Sort](/Linear/Static/Array/06_Sorting/Insertion%20Sort/)

Insertion sort is a very simple sorting algorithm in which the sorted array (or list) is built one element at a time. We all are familiar with this technique of sorting, as we usually use it for ordering a deck of cards while playing bridge. The main idea behind insertion sort is that it inserts each item into its proper place in the final list. To save memory, most implementations of the insertion sort algorithm work by moving the current data element past the already sorted values and repeatedly interchanging it with the preceding value until it is in its correct place.

## Technique

Insertion sort works as follows:
- The array of values to be sorted is divided into two sets. One that stores sorted values and another that contains unsorted values.
- The sorting algorithm will proceed until there are elements in the unsorted set.
- Suppose there are n elements in the array. Initially, the element with index 0 (assuming LB = 0) is in the sorted set. Rest of the elements are in the unsorted set.
- The first element of the unsorted partition has array index 1 (if LB = 0).
- During each iteration of the algorithm, the first element in the unsorted set is picked up and inserted into the correct position in the sorted set.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718114948690781/Insertion-Sort--1.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718114948567700/Insertion-Sort--2.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718114948425115/Insertion-Sort--3.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718114948288466/Insertion-Sort--4.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718114948085606/Insertion-Sort--5.webp">

**Algorithm for insertion sort**
```
Step 1: Repeat Steps 2 to 5 for K=1to N–1
Step 2:     SET TEMP = ARR[K]
Step 3:     SET J = K - 1
Step 4:     Repeat while TEMP <= ARR[J]
                SET ARR[J + 1] = ARR[J]
                SETJ=J - 1
            [END OF INNER LOOP]
Step 5:     SET ARR[J + 1] = TEMP
        [END OF LOOP]
Step 6: EXIT
```

In this algorithm, Step 1 executes a for loop which will be repeated for each element in the array. In Step 2, we store the value of the Kth element in `TEMP`. In Step 3, we set the `J`th index in the array. In Step 4, a for loop is executed that will create space for the new element from the unsorted list to be stored in the list of sorted elements. Finally, in Step 5, the element is stored at the `J+1`th location.

## Complexity of Insertion Sort

For insertion sort, the best case occurs when the array is already sorted. In this case, the running time of the algorithm has a linear running time (i.e., O(n)). This is because, during each iteration, the first element from the unsorted set is compared only with the last element of the sorted set of the array.
Similarly, the worst case of the insertion sort algorithm occurs when the array is sorted in the reverse order. In the worst case, the first element of the unsorted set has to be compared with almost every element in the sorted set. Furthermore, every iteration of the inner loop will have to shift the elements of the sorted set of the array before inserting the next element. Therefore, in the worst case, insertion sort has a quadratic running time (i.e., O(n<sup>2</sup>)).
Even in the average case, the insertion sort algorithm will have to make at least (K–1)/2 comparisons. Thus, the average case also has a quadratic running time.

| Case | Time Complexity | Reasoning |
|---|---|---|
| Best Case | O(n) | Array is already sorted; only n-1 comparisons, no shifting &rarr; O(n). |
| Average Case | O(n<sup>2</sup>) | Each element is inserted into the sorted part with ~n/2 shifts on average &rarr; O(n<sup>2</sup>). |
| Worst Case | O(n<sup>2</sup>) | Reversed order requires shifting every element for each insertion &rarr; O(n<sup>2</sup>). |

# [Selection Sort](/Linear/Static/Array/06_Sorting/Selection%20Sort/)

Selection sort is a sorting algorithm that has a quadratic running time complexity of O(n<sup>2</sup>), thereby making it inefficient to be used on large lists. Although selection sort performs worse than insertion sort algorithm, it is noted for its simplicity and also has performance advantages over more complicated algorithms in certain situations. Selection sort is generally used for sorting files with very large objects (records) and small keys.

## Technique

Selection sort works as follows:

First find the smallest value in the array and place it in the first position. Then, find the second smallest value in the array and place it in the second position. Repeat this procedure until the entire array is sorted. Therefore,
- In Pass 1, find the position `POS` of the smallest value in the array and then swap A[POS] and A[0]. Thus, A[0] is sorted.
- In Pass 2, find the position `POS` of the smallest value in sub-array of N–1 elements. Swap A[POS] with A[1]. Now, A[0] and A[1] is sorted.
- In Pass `N–1`, find the position `POS` of the smaller of the elements A[N–2] and A[N–1]. Swap A[POS] and A[N–2] so that A[0], A[1], ..., A[N–1] is sorted.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718115759019953/Selection-Sort-Algorithm-1.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718115759222685/Selection-Sort-Algorithm-2.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718115759382887/Selection-Sort-Algorithm-3.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718115759606966/Selection-Sort-Algorithm-4.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718115759772057/Selection-Sort-Algorithm-5.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250718115759946916/Selection-Sort-Algorithm-6.webp">

**Algorithm for selection sort**
```
SMALLEST (ARR, K, N, POS)

Step 1: [INITIALIZE] SET SMALL = ARR[K]
Step 2: [INITIALIZE] SET POS = K
Step 3: Repeat forJ= K+1 to N
            IF SMALL > ARR[J]
                SET SMALL = ARR[J]
                SET POS = J
            [END OF IF]
        [END OF LOOP]
Step 4: RETURN POS
```
```
SELECTION SORT(ARR, N)

Step 1: Repeat Steps 2 and 3 for K = 1 to N-1
Step 2:     CALL SMALLEST(ARR, K, N, POS)
Step 3:     SWAP A[K] with ARR[POS]
        [END OF LOOP]
Step 4: EXIT
```

## Complexity of Selection Sort

Selection sort is a sorting algorithm that is independent of the original order of elements in the array. In Pass 1, selecting the element with the smallest value calls for scanning all n elements; thus, n–1 comparisons are required in the first pass. Then, the smallest value is swapped with the element in the first position. In Pass 2, selecting the second smallest value requires scanning the remaining n – 1 elements and so on. Therefore,

(n – 1) + (n – 2) + ... + 2 + 1 = n(n – 1) / 2 = O(n<sup>2</sup>) comparisons

| Case | Time Complexity | Reasoning |
|---|---|---|
| Best Case | O(n<sup>2</sup>) | Always scans the unsorted portion to find the minimum, even if sorted &rarr; O(n<sup>2</sup>). |
| Average Case | O(n<sup>2</sup>) | Same process regardless of order &rarr; O(n<sup>2</sup>). |
| Worst Case | O(n<sup>2</sup>) | Still scans the entire array for each selection &rarr; O(n<sup>2</sup>). |

# [Merge Sort](/Linear/Static/Array/06_Sorting/Merge%20Sort/)

Merge sort is a sorting algorithm that uses the divide, conquer, and combine algorithmic paradigm.

**Divide** means partitioning the n-element array to be sorted into two sub-arrays of n/2 elements. If `A` is an array containing zero or one element, then it is already sorted. However, if there are more elements in the array, divide `A` into two sub-arrays, `A1` and `A2`, each containing about half of the elements of `A`.

**Conquer** means sorting the two sub-arrays recursively using merge sort.

**Combine** means merging the two sorted sub-arrays of size n/2 to produce the sorted array of n
elements.

Merge sort algorithm focuses on two main concepts to improve its performance (running time):
- A smaller list takes fewer steps and thus less time to sort than a large list.
- As number of steps is relatively less, thus less time is needed to create a sorted list from two sorted lists rather than creating it using two unsorted lists.

The merge sort algorithm uses a function merge which combines the sub-arrays to form a sorted array. While the merge sort algorithm recursively divides the list into smaller lists, the merge algorithm conquers the list to sort the elements in individual lists. Finally, the smaller lists are merged to form one list. 

## Technique

The basic steps of a merge sort algorithm are as follows:
- If the array is of length 0 or 1, then it is already sorted.
- Otherwise, divide the unsorted array into two sub-arrays of about half the size.
- Use merge sort algorithm recursively to sort each sub-array.
- Merge the two sub-arrays to form a single sorted list.

To understand the merge algorithm, consider the figure below which shows how we merge two lists to form one list. For ease of understanding, we have taken two sub-lists each containing four elements. The same concept can be utilized to merge four sub-lists containing two elements, or eight sub-lists having one element each.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250923102849301345/420046649.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250923102849111197/420046650.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250923102848872960/420046651.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250923102849544932/420046652.webp">

**Algorithm for merge sort**
```
MERGE (ARR, BEG, MID, END)

Step 1: [INITIALIZE] SET I = BEG, J = MID + 1, INDEX = 0
Step 2: Repeat while (I <= MID) AND (J <= END)
            IF ARR[I] < ARR[J]
                SET TEMP[INDEX] = ARR[I]
                SETI = I + 1
            ELSE
                SET TEMP[INDEX] = ARR[J]
                SETJ = J + 1
            [END OF IF]
            SET INDEX = INDEX + 1
        [END OF LOOP]
Step 3: [Copy the remaining elements of right sub-array, if any]
            IF I > MID
                Repeat while J <= END
                    SET TEMP[INDEX] = ARR[J]
                    SET INDEX = INDEX + 1, SET J = J + 1
                [END OF LOOP]
        [Copy the remaining elements of left sub-array, if any]
            ELSE
                Repeat while I <= MID
                    SET TEMP[INDEX] = ARR[I]
                    SET INDEX = INDEX + 1, SET I = I + 1
                [END OF LOOP]
            [END OF IF]
Step 4: [Copy the contents of TEMP back to ARR] SET K = 0
Step 5: Repeat while K < INDEX
            SET ARR[K] = TEMP[K]
            SET K = K + 1
        [END OF LOOP]
Step 6: END
```
```
MERGE_SORT(ARR, BEG, END)

Step 1: IF BEG < END
            SET MID = (BEG + END)/2
            CALL MERGE_SORT (ARR, BEG, MID)
            CALL MERGE_SORT (ARR, MID+1, END)
            MERGE (ARR, BEG, MID, END)
        [END OF IF]
Step 2: END
```

Compare `ARR[I]` and `ARR[J]`, the smaller of the two is placed in `TEMP` at the location specified by INDEX and subsequently the value `I` or `J` is incremented. When `I` is greater than `MID`, copy the remaining elements of the right sub-array in `TEMP`.

## Complexity of Merge Sort

The running time of merge sort in the average case and the worst case can be given as O(n log n). Although merge sort has an optimal time complexity, it needs an additional space of O(n) for the temporary array `TEMP`.

| Case | Time Complexity | Reasoning |
|---|---|---|
| Best Case | O(n log n) | Always splits and merges evenly regardless of input. |
| Average Case | O(n log n) | Balanced divisions lead to log n levels with n work each. |
| Worst Case | O(n log n) | Performs the same steps for any input order. |

# [Quick Sort](/Linear/Static/Array/06_Sorting/Quick%20Sort/)

Quick sort is a widely used sorting algorithm developed by C. A. R. Hoare that makes O(n log n) comparisons in the average case to sort an array of n elements. However, in the worst case, it has a quadratic running time given as O(n<sup>2</sup>). Basically, the quick sort algorithm is faster than other O(n log n) algorithms, because its efficient implementation can minimize the probability of requiring quadratic time. Quick sort is also known as partition exchange sort. Like merge sort, this algorithm works by using a divide-and-conquer strategy to divide a single unsorted array into two smaller sub-arrays. The quick sort algorithm works as follows:
1. Select an element pivot from the array elements.
2. Rearrange the elements in the array in such a way that all elements that are less than the pivot appear before the pivot and all elements greater than the pivot element come after it (equal values can go either way). After such a partitioning, the pivot is placed in its final position. This is called the partition operation.
3. Recursively sort the two sub-arrays thus obtained. (One with sub-list of values smaller than that of the pivot element and the other having higher value elements). Like merge sort, the base case of the recursion occurs when the array has zero or one element because in that case the array is already sorted. After each iteration, one element (pivot) is always in its final position. Hence, with every iteration, there is one less element to be sorted in the array. Thus, the main task is to find the pivot element, which will partition the array into two halves. To understand how we find the pivot element, follow the steps given below. (We take the first element in the array as pivot).

## Technique

Quick sort works as follows:
1. Set the index of the first element in the array to `loc` and `left` variables. Also, set the index of the last element of the array to the right variable. That is, `loc` = 0, `left` = 0, and `right` = n – 1 (where n in the number of elements in the array)
2. Start from the element pointed by right and scan the array from right to left, comparing each element on the way with the element pointed by the variable `loc`. That is, A[loc] should be less than A[right].
    <ol type="a">
        <li>If that is the case, then simply continue comparing until right becomes equal to loc. Once `right` = `loc`, it means the pivot has been placed in its correct position.</li>
        <li>However, if at any point, we have A[loc] > A[right], then interchange the two values and jump to Step 3.</li>
        <li>Set `loc` = `right`</li>
    </ol>
3. Start from the element pointed by `left` and scan the array from left to right, comparing each element on the way with the element pointed by `loc`. That is, A[loc] should be greater than A[left].
    <ol type="a">
        <li>If that is the case, then simply continue comparing until left becomes equal to loc. Once `left` = `loc`, it means the pivot has been placed in its correct position.</li>
        <li>However, if at any point, we have A[loc] < A[left], then interchange the two values and jump to Step 2.</li>
        <li>Set `loc` = `left`.</li>
    </ol>

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20241111171208918304/quick-sort-1.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20241111171209045220/quick-sort-2.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20241220154252629076/quick-sort-3-1.png">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20241111171209255614/quick-sort-4.webp">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20241213175652062597/quick-sort.png">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20241111171209465155/quick-sort-6.webp">

**Algorithm for quick sort**
```
PARTITION (ARR, BEG, END, LOC)

Step 1: [INITIALIZE] SET LEFT = BEG, RIGHT = END, LOC = BEG, FLAG = 0
Step 2: Repeat Steps 3 to 6 while FLAG = 0
Step 3:     Repeat while ARR[LOC] <= ARR[RIGHT] AND LOC != RIGHT
                SET RIGHT = RIGHT-1
            [END OF LOOP]
Step 4:     IF LOC = RIGHT
                SET FLAG=1
            ELSE IF ARR[LOC] > ARR[RIGHT]
                SWAP ARR[LOC] with ARR[RIGHT]
                SET LOC = RIGHT
            [END OF IF]
Step 5:     IF FLAG = 0
                Repeat while ARR[LOC] >= ARR[LEFT] AND LOC != LEFT
                    SET LEFT = LEFT+1
                [END OF LOOP]
Step 6:         IF LOC = LEFT
                    SET FLAG = 1
                ELSE IF ARR[LOC] < ARR[LEFT]
                    SWAP ARR[LOC] with ARR[LEFT]
                    SET LOC = LEFT
                [END OF IF]
            [END OF IF]
Step 7: [END OF LOOP]
Step 8: END
```
```
QUICK_SORT (ARR, BEG, END)

Step 1: IF (BEG < END)
            CALL PARTITION (ARR, BEG, END, LOC)
            CALL QUICKSORT(ARR, BEG, LOC-1)
            CALL QUICKSORT(ARR, LOC+1, END)
        [END OF IF]
Step 2: END
```

## Complexity of Quick Sort

In the average case, the running time of quick sort can be given as O(n log n). The partitioning of the array which simply loops over the elements of the array once uses O(n) time.

In the best case, every time we partition the array, we divide the list into two nearly equal pieces. That is, the recursive call processes the sub-array of half the size. At the most, only log n nested calls can be made before we reach a sub-array of size 1. It means the depth of the call tree is O(log n). And because at each level, there can only be O(n), the resultant time is given as O(n log n) time.

Practically, the efficiency of quick sort depends on the element which is chosen as the pivot. Its worst-case efficiency is given as O(n<sup>2</sup>). The worst case occurs when the array is already sorted (either in ascending or descending order) and the left-most element is chosen as the pivot.

However, many implementations randomly choose the pivot element. The randomized version of the quick sort algorithm always has an algorithmic complexity of O(n log n).

| Case | Time Complexity | Reasoning |
|---|---|---|
| Best Case | O(n log n) | Pivot splits array evenly at each step. |
| Average Case | O(n log n) | Pivots generally divide data fairly evenly. |
| Worst Case | O(n<sup>2</sup>) | Pivot choices create unbalanced partitions (e.g., sorted input). |