// An optimized version of Selection Sort
function selectionSort(arr) {
    let n = arr.length;

    for (let i = 0; i < n - 1; i++) {

        /* Assume the current position
        holds the minimum element */
        let indexMin = i;

        /* Iterate through the unsorted
        portion to find the actual minimum */
        for (let j = i; j < n; j++) {
            if (arr[j] < arr[indexMin])
                indexMin = j;   // Update indexMin if a smaller element is found
        }

        /* Move minimum element
        to its correct position */
        [arr[i], arr[indexMin]] = [arr[indexMin], arr[i]]
    }

    return arr;
}

// Function to print an array
function printArray(arr) {
    console.log(arr.join(" "))
}

function sleep(s) {
    return new Promise((resolve, reject) => {
        setTimeout(resolve, s * 1000);
    })
}

main = async () => {
    let arr = [ 64, 25, 12, 22, 11 ];
    console.log("Unsorted array:")
    printArray(arr);

    for (let i = 3; i > 0; i--) {
        console.log("Sorting in " + i)
        await sleep(1)
    }

    arr = selectionSort(arr);
    console.log("Sorted array:")
    printArray(arr);
}

main()