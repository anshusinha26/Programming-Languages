'use strict';
/*
/////////////////////////////////////////////////////////
Big O(n)

const nemo = [1, 2, 3, 4, 5, 6, 7, 8, 9, "nemo"];
const large = new Array(10000).fill("nemo");

function findNemo(array) {
    for(let i = 0; i < array.length; i += 1) {
        if(array[i] === "nemo") {
            console.log("Found Nemo!");
            break;
        }
    }
}

findNemo(large); // O(n) --> Linear time, for const nemo: O(10) and for const large: O(10000)
/////////////////////////////////////////////////////////
*/

/* 
/////////////////////////////////////////////////////////
Big O(1)

const boxes = [1, 2]

function logBoxes(boxes) {
    console.log(boxes[0]); // O(1)
    console.log(boxes[1]); // O(1)
}

logBoxes(boxes); // O(2)
/////////////////////////////////////////////////////////
*/

/*
/////////////////////////////////////////////////////////
Big O(n^2)

const box = [1, 2, 3, 4, 5];
for(let i = 0; i < box.length; i += 1) {
    for(let j = 0; j < box.length; j += 1) {
        console.log(box[i], box[j]);
    }
} // O(n^2)
/////////////////////////////////////////////////////////
*/
