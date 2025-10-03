arr = [10, 20, 30, 40]

print("Array before deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")

pos = int(input("\nEnter a position: "))

# Delete the element at the given position.
del arr[pos - 1]

print("\nArray after deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")