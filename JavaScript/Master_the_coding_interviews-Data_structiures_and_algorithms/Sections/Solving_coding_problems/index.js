'use strict';

// i. Given two arrays, let them be arr1 and arr2
// ii. Create a function that checks common elements among these two given arrays
// iii. Ex1: arr1 = [1, 2, 3]
//           arr2 = [4, 5, 6] --> should return false
// iv. Ex2: arr1 = [1, 2, 4]
//          arr2 = [4, 5, 6] --> should return true
// v. These function will contain two nested for loops, and hence the Big O notation will be O(n^2)

function containsCommonElements(arr1, arr2) {
    for(let i = 0; i < arr1.length; i += 1) {
        for(let j = 0;j < arr2.length; j += 1) {
            if(arr1[i] === arr2[j]) {
                return true;
            }
        }
    }
    return false;
}

let arr1 = [1, 2, 3];
let arr2 = [3, 4, 5];
console.log(containsCommonElements(arr1, arr2));