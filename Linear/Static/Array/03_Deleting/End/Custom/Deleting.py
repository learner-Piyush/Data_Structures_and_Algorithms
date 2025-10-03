def deleteAtEnd(arr):
    # Reduce the array size by 1.
    arr.pop()

    return arr

arr = [10, 20, 30, 40]

print("Array before deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")

deleteAtEnd(arr)

print("\nArray after deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")