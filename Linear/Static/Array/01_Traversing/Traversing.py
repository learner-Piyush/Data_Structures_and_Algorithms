arr = [1, 2, 3, 4, 5]

print("Linear Traversal: ", end=" ")
for i in arr:
    print(i, end=" ")
print()

print("Reverse Traversal: ", end=" ")
for i in range(len(arr) - 1, -1, -1):
    print(arr[i], end=" ")
print()