import time

# An optimized version of Bubble Sort
def bubbleSort(arr):
    n = len(arr)

    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr

# Function to print an array
def printArray(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")

arr = [ 64, 34, 25, 12, 22, 11, 90 ]
print("Unsorted array:")
printArray(arr)

for i in range(3, 0, -1):
    print("\nSorting in", i)
    time.sleep(1)

arr = bubbleSort(arr)
print("Sorted array:")
printArray(arr)