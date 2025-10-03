function insertAtEnd(arr, x) {
    // Insert x at the end.
    arr[arr.length++] = x

    return arr
}

let arr = [10, 20, 30, 40]
const x = 50
console.log("Array before insertion")
console.log(arr.join(" "))

insertAtEnd(arr, x)

console.log("Array after insertion")
console.log(arr.join(" "))