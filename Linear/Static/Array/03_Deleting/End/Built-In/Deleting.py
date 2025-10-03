arr = [10, 20, 30, 40]

print("Array before deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")

# Remove the last element from the array.
arr.pop()

print("\nArray after deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")