import time

# An optimized version of Selection Sort
def selectionSort(arr):
    n = len(arr)

    for i in range(n - 1):

        """ Assume the current position
        holds the minimum element """
        indexMin = i

        """ Iterate through the unsorted
        portion to find the actual minimum """
        for j in range(i, n):
            if arr[j] < arr[indexMin]:
                indexMin = j    # Update indexMin if a smaller element is found
        """ Iterate through the unsorted
        portion to find the actual minimum """
        arr[i], arr[indexMin] = arr[indexMin], arr[i]
    return arr

# Function to print an array
def printArray(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")

arr = [ 64, 25, 12, 22, 11 ]
print("Unsorted array:")
printArray(arr)

for i in range(3, 0, -1):
    print("\nSorting in", i)
    time.sleep(1)

arr = selectionSort(arr)
print("Sorted array:")
printArray(arr)