import readline from 'readline'

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

function linearSearch(arr, x) {
    // Iterate over the array in order to
    // find the key x
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === x)
            return i
    }
    return -1
}

let arr = [10, 8, 2, 7, 3, 4, 9, 1, 6, 5]

console.log(arr.join(" "))

rl.question("Enter a number to search: ", (ans) => {
    const x = parseInt(ans)

    const result = linearSearch(arr, x)
    console.log((result == -1) ? x + " is not present in Array" : x + " is present at index " + result);
})