import time

# Merges two subarrays of arr[]
# First subarray is arr[l...m]
# Second subarray is arr[m+1...r]
def merge(arr, l, m, r):
    n1 = m - l + 1
    n2 = r - m

    # Create temp arrays
    L = []
    R = []
    ARR = []

    # Copy data to temp arrays L[] and R[]
    for i in range(n1):
        L.append(arr[l + i])
    for i in range(n2):
        R.append(arr[m + 1 + i])
    
    # Merge the temp arrays back into arr[left...right]
    i = j = 0

    # merge elements in sorted order
    while i < n1 and j < n2:
        if L[i] <= R[j]:
            ARR.append(L[i])
            i += 1
        else:
            ARR.append(R[j])
            j += 1
        
    """copy remaining elements
    from L[], if there are any"""
    while i < n1:
        ARR.append(L[i])
        i += 1

    """copy remaining elements
    from R[], if there are any"""
    while j < n2:
        ARR.append(R[j])
        j += 1
    
    for i in range(len(ARR)):
        arr[l + i] = ARR[i]
    
    return arr

def mergeSort(arr, l, r):
    if l < r:
        m = (l + r) // 2
        arr = mergeSort(arr, l, m)
        arr = mergeSort(arr, m + 1, r)
        arr = merge(arr, l, m, r)
    
    return arr

# Function to print an array
def printArray(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")

arr = [ 38, 27, 43, 10 ]
print("Unsorted array:")
printArray(arr)

for i in range(3, 0, -1):
    print("\nSorting in", i)
    time.sleep(1)

arr = mergeSort(arr, 0, len(arr) - 1)
print("Sorted array:")
printArray(arr)