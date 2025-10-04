def binarySearchRecursion(arr, low, high, x):
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid = (low + high) // 2

        if arr[mid] == x:
            return mid                                              # Check if x is present at mid
        elif arr[mid] < x:
            return binarySearchRecursion(arr, mid + 1, high, x)     # If x greater, ignore left half
        else:
            return binarySearchRecursion(arr, low, mid - 1, x)      # If x is smaller, ignore right half
    
    # If we reach here, then element was not present
    return -1

arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

for i in range(len(arr)):
    print(arr[i], end=" ")

x = int(input("\nEnter a number to search: "))

result = binarySearchRecursion(arr, 0, len(arr) - 1, x)
if result == -1:
    print(x, "is not present in Array")
else:
    print(x, "is present at index", result)