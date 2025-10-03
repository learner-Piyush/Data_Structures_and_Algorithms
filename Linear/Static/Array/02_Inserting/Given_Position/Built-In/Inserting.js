import readline from 'readline'

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

let arr = [10, 20, 30, 40]
const x = 50
console.log("Array before insertion")
console.log(arr.join(" "))

rl.question("\nEnter a position: ", (ans) => {
    const pos = parseInt(ans)

    // Insert x at the given position.
    arr.splice(pos - 1, 0, x)

    console.log("Array after insertion")
    console.log(arr.join(" "))
    
    rl.close()
})
