# Inserting an Element in an Array

Inserting an element in an array means **adding a new element at a specific position** in the array while maintaining the sequence of existing elements. Since arrays are linear data structures, insertion may require shifting elements to make space for the new element.

## [Insert Element at the Beginning of an Array](/Linear/Static/Array/02_Inserting/Beginning/)

**Algorithm to insert an element at the beginning of an array**

    Step 1: SET I = current_size_of_array - 1
    Step 2: WHILE I >= 0
    Step 3:     SET A[I + 1] = A[I]   [Shift elements right]
    Step 4:     SET I = I - 1
            [END OF LOOP]
    Step 5: SET A[0] = new_element
    Step 6: INCREMENT array size by 1
    Step 7: EXIT

**Time Complexity:**
Worst Case
**O(n)**
(because all elements need to be shifted)

## [Insert Element at a Given Position in an Array](/Linear/Static/Array/02_Inserting/Given_Position/)

**Algorithm to insert an element at a specific position (index `pos`) in the array**

    Step 1: SET I = current_size_of_array - 1
    Step 2: WHILE I >= pos
    Step 3:     SET A[I + 1] = A[I]   [Shift elements right]
    Step 4:     SET I = I - 1
            [END OF LOOP]
    Step 5: SET A[pos] = new_element
    Step 6: INCREMENT array size by 1
    Step 7: EXIT

**Time Complexity:**
Average Case
**O(n)**
(elements after `pos` are shifted)

## [Insert Element at the End of an Array](/Linear/Static/Array/02_Inserting/End/)

**Algorithm to insert an element at the end of the array, no shifting is required.**

    Step 1: SET A[current_size_of_array] = new_element
    Step 2: INCREMENT array size by 1
    Step 3: EXIT

**Time Complexity:**
Best Case
**O(1)**
(no shifting required)