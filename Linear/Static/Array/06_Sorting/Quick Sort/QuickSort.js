// partition function
function partition(arr, l, r) {
    // Choose the pivot
    let pivot = arr[l];

    /*i is index for larger elements that
    starts from the second element of the array
    and j is index for smaller elements that
    starts from the last element of the array*/
    let i = l + 1, j = r;

    // run the loop until i and j intercross
    while (i <= j) {
        while (i <= r && arr[i] <= pivot) {
            i++;
        }
        while (j >= l + 1 && arr[j] >= pivot) {
            j--;
        }

        // swap the elements whenever jth element < pivot < ith element
        if (i < j) {
            [arr[i], arr[j]] = [arr[j], arr[i]]
            i++;
            j--;
        }
    }

    // swap pivot with jth element to place pivot at correct position
    [arr[j], arr[l]] = [arr[l], arr[j]]
    
    return j;
}

function quickSort(arr, l, r) {
    if (l < r) {
        // p is the partition return index of pivot
        let p = partition(arr, l, r);

        /*recursion calls for smaller elements
        and greater or equals elements*/
        arr = quickSort(arr, l, p - 1);
        arr = quickSort(arr, p + 1, r);
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
    let arr = [ 10, 7, 8, 9, 1, 5 ];
    console.log("Unsorted array:")
    printArray(arr);

    for (let i = 3; i > 0; i--) {
        console.log("Sorting in " + i)
        await sleep(1)
    }

    arr = quickSort(arr, 0, arr.length - 1);
    console.log("Sorted array:")
    printArray(arr);
}

main()