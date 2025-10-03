arr = [10, 20, 30, 40]
x = 50
print("Array before insertion")
for i in range(len(arr)):
    print(arr[i], end=" ")

pos = int(input("\nEnter a position: "))

# Insert x at the given position.
arr.insert(pos - 1, x)

print("\nArray after insertion")
for i in range(len(arr)):
    print(arr[i], end=" ")