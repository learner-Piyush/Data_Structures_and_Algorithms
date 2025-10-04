def linearSearch(arr, x):
    # Iterate over the array in order to
    # find the key x
    for i in range(len(arr)):
        if arr[i] == x:
            return i
    return -1

arr = [10, 8, 2, 7, 3, 4, 9, 1, 6, 5]

for i in range(len(arr)):
    print(arr[i], end=" ")

x = int(input("\nEnter a number to search: "))

result = linearSearch(arr, x)
if result == -1:
    print(x, "is not present in Array")
else:
    print(x, "is present at index", result)