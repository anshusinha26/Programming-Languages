'use strict';

/*
/////////////////////////////////////////////////////////
Hash Table

let user = {
    age: 21,
    gender: "Male",
    scream: function() {
        return "Lol";
    }
}

user.alive = true; // O(1)
console.log(user.age); // O(1)
console.log(user.scream()); // O(1)
console.log(user); // O(1)
/////////////////////////////////////////////////////////
*/


/*
/////////////////////////////////////////////////////////
Implementing a Hash Table

class HashTable {
    constructor(size) {
        this.data = new Array(size);
    }

    _hash(key) {
        let hash = 0;
        for(let i = 0; i < key.length; i+= 1) {
            hash = (hash + key.charCodeAt(i) * i) % this.data.length;
        }
    return hash;
    }

    set(item) {
        this.data[index]
    }
}

const myHashTable = new HashTable(50);
///////////////////////Incomplete////////////////////////
*/

/*
/////////////////////////////////////////////////////////
Exercise: First recurring character
// Google question
* array1 = [2, 5, 1, 2, 3, 5, 1, 2, 4], should return 2
* array2 = [2, 1, 1, 2, 3, 5, 1, 2, 4], should return 1
*array3 = [1, 2, 3, 4], should return undefined

// Brute force (incomplete)
function firstRecurChar1(arr) {
    let maxDiff = 0;
    for(let i = 0; i < arr.length; i += 1) {
        for(let j = i + 1; j < arr.length; j += 1) {
            maxDiff = j - i;
            if(arr[i] === arr[j] && j - i < maxDiff) {
                return arr[i];
            }
        }
    }
    return undefined;
}

console.log(firstRecurChar1([1, 2, 2, 3, 4, 1])); // O(n^2)

// Better solution
function firstRecurChar2(arr) {
    let hTab = {};
    for(let i = 0; i < arr.length; i+= 1) {
        if(hTab[arr[i]]) {
            return arr[i];
        }
        else {
            hTab[arr[i]] = i;
        }
    }
    return undefined;
}

console.log(firstRecurChar2([1, 2, 2, 3, 4, 3, 2, 1]));
/////////////////////////////////////////////////////////
*/

function rotate(nums, k) {
    if(nums.length !== 0) {
        let finalArr = [];
        finalArr = nums.splice(k + 1, k);
        finalArr.push(...nums);
        return finalArr;   
    }
}

console.log(rotate([1, 2, 3, 4, 5, 6, 7], 3));







