# Deleting an Element in an Array

Deleting an element from an array means **removing an element at a specific position** while maintaining the sequence of remaining elements. Since arrays are linear data structures, deletion may require shifting elements to fill the gap left by the removed element.

## [Delete an Element from the Beginning of an Array](/Linear/Static/Array/03_Deleting/Beginning/)

**Algorithm to delete an element from the beginning of an array**

    Step 1: SET I = 0
    Step 2: WHILE I < current_size_of_array - 1
    Step 3:     SET A[I] = A[I + 1]   [Shift elements left]
    Step 4:     SET I = I + 1
            [END OF LOOP]
    Step 5: DECREMENT array size by 1
    Step 6: EXIT

**Time Complexity:**
Worst Case
**O(n)**
(all elements need to be shifted)

## [Delete an Element from a Given Position in an Array](/Linear/Static/Array/03_Deleting/Given_Position/)

**Algorithm to delete an element at a specific position (index `pos`) in the array**

    Step 1: SET I = pos
    Step 2: WHILE I < current_size_of_array - 1
    Step 3:     SET A[I] = A[I + 1]   [Shift elements left]
    Step 4:     SET I = I + 1
            [END OF LOOP]
    Step 5: DECREMENT array size by 1
    Step 6: EXIT

**Time Complexity:**
Average Case
**O(n)**
(elements after `pos` need to be shifted)

## [Delete an Element from the End of an Array](/Linear/Static/Array/03_Deleting/End/)

**Algorithm to delete an element from the end of the array, no shifting required**

    Step 1: DECREMENT array size by 1
    Step 2: EXIT

**Time Complexity:**
Best Case
**O(1)**
(no shifting required)