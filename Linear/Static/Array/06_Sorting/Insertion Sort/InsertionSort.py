import time

# An optimized version of Insertion Sort
def insertionSort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1

        """ Move elements of arr[0..i-1], that
        are greater than key, to one position
        ahead of their current position """
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr [j + 1] = key
    return arr

# Function to print an array
def printArray(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")

arr = [ 12, 11, 13, 5, 6 ]
print("Unsorted array:")
printArray(arr)

for i in range(3, 0, -1):
    print("\nSorting in", i)
    time.sleep(1)

arr = insertionSort(arr)
print("Sorted array:")
printArray(arr)