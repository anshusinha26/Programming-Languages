'use strict';

/*
/////////////////////////////////////////////////////////
Arrays introduction

const strings = ["a", "b", "c", "d"]

// push - adds an element at the end of an array
strings.push("e"); // O(1)
console.log(strings);

// pop = removes an element from the end of an array
strings.pop("e"); // O(1)
strings.pop();
console.log(strings);

// unshift - adds an element at the beginning of an array
strings.unshift("x"); // O(n)
console.log(strings);

// splice - adds or deletes an element at any middle position of an array
strings.splice(2, 0, "alien"); // O(n)
console.log(strings);
strings.splice(2, 1);
console.log(strings);
/////////////////////////////////////////////////////////
*/

/*
/////////////////////////////////////////////////////////
Optional: Classes in JavaScript

class Player {
    constructor(name, type) {
        this.pName = name;
        this.pType = type;
    }
    introduce() {
        console.log(`Hi I m ${this.pName} a ${this.pType}.`);
    }
}

const player1 = new Player("Anshu", "Web developer"); // object: player1
player1.introduce();

const player2 = new Player("Swati", "Student"); // object: player2
player2.introduce();
/////////////////////////////////////////////////////////
*/

/*
/////////////////////////////////////////////////////////
Implementing an array

class MyArray {
    constructor() {
        this.length = 0;
        this.data = {};
    }

    get(index) {
        return this.data[index];
    }

    push(item) {
        this.data[this.length] = item;
        this.length++;
        return this.length;
    }

    pop() {
        let lastItem = this.data[this.length - 1];
        delete this.data[this.length - 1];
        this.length--;
        return lastItem;
    }

    delete(index) {
        const item = this.data[index];
        this.shiftItems(index);
    }

    shiftItems(index) {
        for(let i = index; i < this.length - 1; i += 1) {
            this.data[i] = this.data[i + 1];
        }
        delete this.data[this.length - 1];
        this.length--;
    }
}

let newArray = new MyArray();
newArray.push("Hi");
newArray.push("Hello");
newArray.push("Hola");
// newArray.pop();
newArray.delete(0);
console.log(newArray);
/////////////////////////////////////////////////////////
*/

/*
/////////////////////////////////////////////////////////
Exercise: Reverse a String

// long method
function revereString(str) {
    let reversedString = [];
    if(typeof(str) === "string" && str.length >= 2) {
        for(let i = str.length - 1; i >= 0; i -= 1) {
            reversedString.push(str[i]);
        }
        return reversedString.join('');
    }
    else {
        return "Enter a string pls";
    }
}

console.log(revereString("anshu")); // O(n)

// short method (better solution)
function revereString2(str) {
    if(typeof(str) === "string" && str.length >= 2) {
        return [...str].reverse().join('');
    }
    else {
        return "Enter a string pls";
    }
}

console.log(revereString2("anshu")); // O(constant)
/////////////////////////////////////////////////////////
*/

/*
/////////////////////////////////////////////////////////
Merge two sorted arrays

// better solution
function mergeSortedArrays(arr1, arr2) {
    let finalArray = [...arr1, ...arr2];

    for(let k = 0; k < finalArray.length; k += 1) {
        if(finalArray[k] > finalArray[k + 1]) {
            [finalArray[k], finalArray[k + 1]]  = [finalArray[k + 1], finalArray[k]];   
        }
    }
    return finalArray;
}

console.log(mergeSortedArrays([1, 2, 3, 10], [3, 4, 5])); // O(n)
/////////////////////////////////////////////////////////
*/












