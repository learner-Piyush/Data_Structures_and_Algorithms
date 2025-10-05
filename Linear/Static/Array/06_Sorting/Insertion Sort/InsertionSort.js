// An optimized version of Insertion Sort
function insertionSort(arr) {
    for (let i = 1; i < arr.length; i++) {
        let key = arr[i];
        let j = i - 1;
        
        /* Move elements of arr[0..i-1], that
        are greater than key, to one position
        ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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
    let arr = [ 12, 11, 13, 5, 6 ];
    console.log("Unsorted array:")
    printArray(arr);

    for (let i = 3; i > 0; i--) {
        console.log("Sorting in " + i)
        await sleep(1)
    }

    arr = insertionSort(arr);
    console.log("Sorted array:")
    printArray(arr);
}

main()