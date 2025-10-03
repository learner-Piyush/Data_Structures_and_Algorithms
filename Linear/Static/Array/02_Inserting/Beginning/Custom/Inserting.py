def insertAtBeginning(arr, x):
    arr.append(0)

    # Shift elements to the right.
    for i in range(len(arr) - 1, 0, -1):
        arr[i] = arr[i - 1]

    # Insert x at the beginning.
    arr[0] = x

    return arr

arr = [10, 20, 30, 40]
x = 50
print("Array before insertion")
for i in range(len(arr)):
    print(arr[i], end=" ")

insertAtBeginning(arr, x)

print("\nArray after insertion")
for i in range(len(arr)):
    print(arr[i], end=" ")