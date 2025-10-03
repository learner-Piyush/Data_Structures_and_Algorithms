import readline from 'readline'

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

let arr = [10, 20, 30, 40]

console.log("Array before deletion")
console.log(arr.join(" "))

rl.question("\nEnter a position: ", (ans) => {
    const pos = parseInt(ans)

    // Delete the element at the given position.
    arr.splice(pos - 1, 1)

    console.log("Array after deletion")
    console.log(arr.join(" "))
    
    rl.close()
})
