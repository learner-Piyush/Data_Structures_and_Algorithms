def deleteAtGivenPosition(arr, pos):
    # Delete the element at the given position.
    for i in range(pos, len(arr)):
        arr[i - 1] = arr[i]

    arr.pop()

    return arr

arr = [10, 20, 30, 40]

print("Array before deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")

pos = int(input("\nEnter a position: "))

deleteAtGivenPosition(arr, pos)

print("\nArray after deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")