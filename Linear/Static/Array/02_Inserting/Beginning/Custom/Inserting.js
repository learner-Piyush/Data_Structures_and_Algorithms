function insertAtBeginning(arr, x) {
    arr.length++

    // Shift elements to the right.
    for (let i = arr.length - 1; i >= 0; i--) {
        arr[i + 1] = arr[i]
    }

    // Insert x at the beginning.
    arr[0] = x

    return arr
}

let arr = [10, 20, 30, 40]
const x = 50
console.log("Array before insertion")
console.log(arr.join(" "))

insertAtBeginning(arr, x)

console.log("Array after insertion")
console.log(arr.join(" "))