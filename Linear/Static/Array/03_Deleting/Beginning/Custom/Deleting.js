function deleteAtBeginning(arr) {
    // Shift all the elements 1 position to the left.
    // starting from second element
    for (let i = 1; i < arr.length; i++) {
        arr[i - 1] = arr[i]
    }

    arr.length--

    return arr
}

let arr = [10, 20, 30, 40]

console.log("Array before deletion")
console.log(arr.join(" "))

deleteAtBeginning(arr)

console.log("Array after deletion")
console.log(arr.join(" "))