let arr = [10, 20, 30, 40]
const x = 50
console.log("Array before insertion")
console.log(arr.join(" "))

// Insert x at the beginning.
arr.unshift(x)

console.log("Array after insertion")
console.log(arr.join(" "))