def insertAtGivenPosition(arr, x, pos):
    arr.append(0)

    # Shift elements to the right.
    for i in range(len(arr) - 1, pos - 1, -1):
        arr[i] = arr[i - 1]

    # Insert x at the index pos - 1.
    arr[pos - 1] = x

    return arr

arr = [10, 20, 30, 40]
x = 50
print("Array before insertion")
for i in range(len(arr)):
    print(arr[i], end=" ")

pos = int(input("\nEnter a position: "))

insertAtGivenPosition(arr, x, pos)

print("\nArray after insertion")
for i in range(len(arr)):
    print(arr[i], end=" ")