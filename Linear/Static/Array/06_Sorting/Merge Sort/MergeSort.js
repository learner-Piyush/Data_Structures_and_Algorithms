// Merges two subarrays of arr[]
// First subarray is arr[l...m]
// Second subarray is arr[m+1...r]
function merge(arr, l, m, r) {
    let n1 = m - l + 1;
    let n2 = r - m;

    // Create temp arrays
    const L = []
    const R = []
    const ARR = []

    // Copy data to temp arrays L[] and R[]
    for (let i = 0; i < n1; i++) {
        L.push(arr[l + i]);
    }
    for (let i = 0; i < n2; i++) {
        R.push(arr[m + 1 + i]);
    }
    
    // Merge the temp arrays back into arr[left...right]
    let i = 0, j = 0;

    // merge elements in sorted order
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            ARR.push(L[i++]);
        } else {
            ARR.push(R[j++]);
        }
        
    }

    /* copy the remaining elements
    of L[], if there are any */
    while (i < n1) {
        ARR.push(L[i++]);
    }

    /* copy the remaining elements
    of L[], if there are any */
    while (j < n2) {
        ARR.push(R[j++]);
    }

    for (let i = 0; i < ARR.length; i++)
    {
        arr[l + i] = ARR[i];
    }
    
    return arr;
}

function mergeSort(arr, l, r) {
    if (l < r) {
        let m = Math.floor((l + r) / 2);
        arr = mergeSort(arr, l, m);
        arr = mergeSort(arr, m + 1, r);
        arr = merge(arr, l, m, r);
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
    let arr = [ 38, 27, 43, 10 ];
    console.log("Unsorted array:")
    printArray(arr);

    for (let i = 3; i > 0; i--) {
        console.log("Sorting in " + i)
        await sleep(1)
    }

    arr = mergeSort(arr, 0, arr.length - 1);
    console.log("Sorted array:")
    printArray(arr);
}

main()