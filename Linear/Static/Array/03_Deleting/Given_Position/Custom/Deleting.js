import readline from 'readline'

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

function deleteAtGivenPosition(arr, pos) {    
    // Delete the element at the given position.
    for (let i = pos; i < arr.length; i++) {
        arr[i - 1] = arr[i]
    }

    arr.length--

    return arr
}

let arr = [10, 20, 30, 40]

console.log("Array before deletion")
console.log(arr.join(" "))

rl.question("\nEnter a position: ", (ans) => {
    const pos = parseInt(ans)

    deleteAtGivenPosition(arr, pos)

    console.log("Array after deletion")
    console.log(arr.join(" "))
    
    rl.close()
})