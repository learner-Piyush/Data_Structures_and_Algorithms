// An optimized version of Bubble Sort
function bubbleSort(arr) {
    const n = arr.length;
    let i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]]
        }
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
    let arr = [ 64, 34, 25, 12, 22, 11, 90 ];
    console.log("Unsorted array:")
    printArray(arr);

    for (let i = 3; i > 0; i--) {
        console.log("Sorting in " + i)
        await sleep(1)
    }

    arr = bubbleSort(arr);
    console.log("Sorted array:")
    printArray(arr);
}

main()