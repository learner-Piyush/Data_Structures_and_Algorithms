arr = [10, 20, 30, 40]
x = 50
print("Array before insertion")
for i in range(len(arr)):
    print(arr[i], end=" ")

# Insert x at the end.
arr.append(x)

print("\nArray after insertion")
for i in range(len(arr)):
    print(arr[i], end=" ")