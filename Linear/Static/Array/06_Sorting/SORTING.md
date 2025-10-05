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