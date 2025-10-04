def mergeArrays(arr1, arr2):
    n = len(arr1)
    m = len(arr2)
    i = j = 0

    arr3 = []

    # merge elements in sorted order
    while i < n and j < m:
        if arr1[i] <= arr2[j]:
            arr3.append(arr1[i])
            i += 1
        else:
            arr3.append(arr2[j])
            j += 1
        
    # copy remaining elements from arr1
    while i < n:
        arr3.append(arr1[i])
        i += 1

    # copy remaining elements from arr2
    while j < m:
        arr3.append(arr2[j])
        j += 1

    return arr3

arr1 = [1, 3, 6, 10]
arr2 = [2, 4, 6, 8]

arr3 = mergeArrays(arr1, arr2)

print(arr3)