# Traversing an Array

Traversing an array means accessing each and every element of the array for a specific purpose.

Traversing the data elements of an array can include printing every element, counting the total number of elements, or performing any process of these elements. Since, array is a linear data structure (because all its elements form a sequence), traversing its elements is very simple and straightforward.

**Algorithm for array traversal**

    Step 1: [Initialization] SET I = lower_bound
    Step 2: Repeat step 3 to 4 while I <= upper_bound
    step 3:     Apply process to A[I]
    Step 4:     SET I = I + 1
            [END OF LOOP]
    Step 5: EXIT

In Step 1, we initialize the index to the lower bound of the array. In Step 2, a `while` loop is executed. Step 3 process the individual array element as specified by the array name and index value. Step 4, increments the index value so that the next array element could be processed. The `while` loop in Step 2 is executed until all the elements in the array are processed, i.e., until I is less than or equal to the upper bound of the array.