def insertAtEnd(arr, x):
    arr.append(0)

    # Insert x at the end.
    arr[-1] = x

    return arr

arr = [10, 20, 30, 40]
x = 50
print("Array before insertion")
for i in range(len(arr)):
    print(arr[i], end=" ")

insertAtEnd(arr, x)

print("\nArray after insertion")
for i in range(len(arr)):
    print(arr[i], end=" ")