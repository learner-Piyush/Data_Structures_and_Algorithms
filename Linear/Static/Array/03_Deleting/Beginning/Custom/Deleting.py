def deleteAtBeginning(arr):
    # Shift all the elements 1 position to the left.
    # starting from second element
    for i in range(1, len(arr), 1):
        arr[i - 1] = arr[i]

    arr.pop()
    
    return arr

arr = [10, 20, 30, 40]

print("Array before deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")

deleteAtBeginning(arr)

print("\nArray after deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")