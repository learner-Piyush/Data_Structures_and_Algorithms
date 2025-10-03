import readline from 'readline'

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

function insertAtGivenPosition(arr, x, pos) {
    arr.length++

    // Shift elements to the right.
    for (let i = arr.length - 1; i > pos; i--) {
        arr[i + 1] = arr[i]
    }

    // Insert x at the index pos - 1.
    arr[pos - 1] = x

    return arr
}

let arr = [10, 20, 30, 40]
const x = 50
console.log("Array before insertion")
console.log(arr.join(" "))

rl.question("\nEnter a position: ", (ans) => {
    const pos = parseInt(ans)

    insertAtGivenPosition(arr, x, pos)

    console.log("Array after insertion")
    console.log(arr.join(" "))
    
    rl.close()
})