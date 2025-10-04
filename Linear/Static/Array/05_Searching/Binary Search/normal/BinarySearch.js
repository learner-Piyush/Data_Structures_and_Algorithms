import readline from 'readline'

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

function binarySearch(arr, x) {
    let low = 0;
    let high = arr.length - 1;

    while (low <= high) {
        let mid = Math.floor((low + high) / 2);

        if (arr[mid] == x) {
            return mid;         // Check if x is present at mid
        } else if (arr[mid] < x) {
            low = mid + 1;      // If x greater, ignore left half
        } else {
            high = mid - 1;     // If x is smaller, ignore right half
        }
    }

    // If we reach here, then element was not present
    return -1;
}

let arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

console.log(arr.join(" "))

rl.question("Enter a number to search: ", (ans) => {
    const x = parseInt(ans)

    const result = binarySearch(arr, x)
    console.log((result == -1) ? x + " is not present in Array" : x + " is present at index " + result);
})