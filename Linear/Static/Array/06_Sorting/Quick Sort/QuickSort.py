import time

# partition function
def partition(arr, l, r):
    # Choose the pivot
    pivot = arr[l]

    """i is index for larger elements that
    starts from the second element of the array
    and j is index for smaller elements that
    starts from the last element of the array"""
    i = l + 1
    j = r

    # run the loop until i and j intercross
    while i <= j:
        while i <= r and arr[i] <= pivot:
            i += 1
        while j >= l + 1 and arr[j] >= pivot:
            j -= 1
        
        # swap the elements whenever jth element < pivot < ith element
        if i < j:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
            j -= 1
    
    # swap pivot with jth element to place pivot at correct position
    arr[j], arr[l] = arr[l], arr[j]
    
    return j

def quickSort(arr, l, r):
    if l < r:
        # p is the partition return index of pivot
        p = partition(arr, l, r)

        """recursion calls for smaller elements
        and greater or equals elements"""
        arr = quickSort(arr, l, p - 1)
        arr = quickSort(arr, p + 1, r)
    
    return arr

# Function to print an array
def printArray(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")

arr = [ 10, 7, 8, 9, 1, 5 ]
print("Unsorted array:")
printArray(arr)

for i in range(3, 0, -1):
    print("\nSorting in", i)
    time.sleep(1)

arr = quickSort(arr, 0, len(arr) - 1)
print("Sorted array:")
printArray(arr)