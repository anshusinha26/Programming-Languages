"use strict";

// this variable stores randomly generated numbers between 1 and 20 including both 1 and 20
let answer = Math.trunc(Math.random() * 20) + 1;
//this prints the answer to the console
console.log(`The correct answer is ${answer}`);

// this variable stores the initial score of 20
let score = 20;
// this variable stores the initial highscore of 0
let highscore = 0;

// this function takes in the conditional message and manipulates the text content
const displayMessage = (message) => {
  document.querySelector(".message").textContent = message;
};

// this function takes in the score and manipulates the text content
const displayScore = (score) => {
  document.querySelector(".score").textContent = score;
};

// this function takes in the number and manipulates the text content
const displayNumber = (number) => {
  document.querySelector(".number").textContent = number;
};

// this function takes in the highscore and manipulates the text content
const displayHighscore = (highscore) => {
  document.querySelector(".highscore").textContent = highscore;
};

// this function takes in the css value of the body and manipulates according to the winning or losing condition
const setBodyStyle = (value) => {
  document.querySelector("body").style.backgroundColor = value;
};

// this function takes in the css value of the number and manipulates according to the winning or losing condition
const setNumberStyle = (value) => {
  document.querySelector(".number").style.width = value;
};

// this function adds the click functionality to the game and triggers a function when clicked, which checks the score and passes different values to respective functions
document.querySelector(".check").addEventListener("click", function () {
  const guess = Number(document.querySelector(".guess").value);

  if (score > 1 && guess != answer) {
    if (!guess) {
      displayMessage("🚫 No number!");
      score -= 1;
      displayScore(score);
    } else if (guess < answer) {
      displayMessage("🔻 Too low!");
      score -= 1;
      displayScore(score);
    } else if (guess > answer) {
      displayMessage("🔺 Too high!");
      score -= 1;
      displayScore(score);
    }
  } else if (guess === answer && score >= 1) {
    displayMessage("🎊 You got it!");
    displayNumber(answer);
    highscore = score;
    displayHighscore(highscore);
    setBodyStyle("#60b347");
    setNumberStyle("30rem");
  } else {
    displayMessage("💥 You lost the game!");
    displayScore(0);
    displayHighscore(0);
  }
});

// this function adds click functionality whic triggers a reset to the game and restores the game to the initial condition when clicked
document.querySelector(".again").addEventListener("click", function () {
  displayNumber("?");
  displayMessage("Start guessing...");
  displayScore(20);
  displayHighscore(0);
  document.querySelector(".guess").value = null;
  answer = Math.trunc(Math.random() * 20) + 1;
  console.log(`The correct answer is ${answer}`);
  score = 20;
  displayHighscore(highscore);
  setBodyStyle("#222");
  setNumberStyle("15rem");
});
