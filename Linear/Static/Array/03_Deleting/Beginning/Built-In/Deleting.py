arr = [10, 20, 30, 40]

print("Array before deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")

# Remove the first element.
del arr[0]

print("\nArray after deletion")
for i in range(len(arr)):
    print(arr[i], end=" ")