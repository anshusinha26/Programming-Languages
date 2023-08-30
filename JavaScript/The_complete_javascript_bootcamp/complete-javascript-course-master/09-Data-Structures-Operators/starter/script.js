"use strict";

// Data needed for a later exercise
const flights =
  "_Delayed_Departure;fao93766109;txl2133758440;11:25+_Arrival;bru0943384722;fao93766109;11:45+_Delayed_Arrival;hel7439299980;fao93766109;12:05+_Departure;fao93766109;lis2323639855;12:30";

// Data needed for first part of the section
const restaurant = {
  name: "Classico Italiano",
  location: "Via Angelo Tavanti 23, Firenze, Italy",
  categories: ["Italian", "Pizzeria", "Vegetarian", "Organic"],
  starterMenu: ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad"],
  mainMenu: ["Pizza", "Pasta", "Risotto"],

  order: function (startIndex, endIndex) {
    return [this.starterMenu[startIndex], this.mainMenu[endIndex]];
  },

  openingHours: {
    thu: {
      open: 12,
      close: 22,
    },
    fri: {
      open: 11,
      close: 23,
    },
    sat: {
      open: 0, // Open 24 hours
      close: 24,
    },
  },
};

// 104. Destructuring objects

// const { name, openingHours, categories } = restaurant;
// console.log(name, openingHours, categories);

// const {
//   name: restaurantName,
//   openingHours: hours,
//   categories: tags,
// } = restaurant;
// console.log(restaurantName, hours, tags);

// mutating variables

let a = 1;
let b = 2;
const obj = { a: 3, b: 4, c: 5 };
({ a, b } = obj);
console.log(a, b);

/////

// // 103. Destructuring arrays
// const arr = [1, 2, 3];
// const [x, y, z] = arr;
// console.log(x, y, z);

// let [first, , second] = restaurant.categories;
// console.log(first, second);

// [first, second] = [second, first];
// console.log(first, second);

// const [startDish, mainDish] = restaurant.order(1, 2);
// console.log(startDish, mainDish);

// const nested = [1, 2, [3, 4]];
// const [a, b, [c, d]] = nested;
// console.log(a, b, c, d);
