function mergeArrays(arr1, arr2) {
    n = arr1.length
    m = arr2.length
    let i = 0, j = 0

    let arr3 = []

    // merge elements in sorted order
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            arr3.push(arr1[i++])
        } else {
            arr3.push(arr2[j++])
        }
        
    }

    // copy remaining elements from arr1
    while (i < n)
        arr3.push(arr1[i++])

    // copy remaining elements from arr2
    while (j < m)
        arr3.push(arr2[j++])

    return arr3
}

let arr1 = [1, 3, 6, 10]
let arr2 = [2, 4, 6, 8]

let arr3 = mergeArrays(arr1, arr2)

console.log(arr3.join(" "))