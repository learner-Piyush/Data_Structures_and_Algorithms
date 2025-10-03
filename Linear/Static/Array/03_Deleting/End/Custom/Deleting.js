function insertAtEnd(arr) {
    // Reduce the array size by 1.
    arr.length--

    return arr
}

let arr = [10, 20, 30, 40]

console.log("Array before deletion")
console.log(arr.join(" "))

insertAtEnd(arr)

console.log("Array after deletion")
console.log(arr.join(" "))