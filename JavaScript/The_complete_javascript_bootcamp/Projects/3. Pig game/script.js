"use strict";

// player1 stats
const player1El = document.querySelector(".player--0");
const player1NameEl = document.querySelector("#name--0");
const player1TotalScoreEl = document.querySelector("#score--0");
const player1CurrentScoreEl = document.querySelector("#current--0");
// player2 stats
const player2El = document.querySelector(".player--1");
const player2NameEl = document.querySelector("#name--1");
const player2TotalScoreEl = document.querySelector("#score--1");
const player2CurrentScoreEl = document.querySelector("#current--1");
// buttons
const rollDice = document.querySelector(".btn--roll");
const holdScore = document.querySelector(".btn--hold");
const newGame = document.querySelector(".btn--new");
// dice
const diceEl = document.querySelector(".dice");
// current socre
let currentScore = 0;
// total score
let totalScore = [0, 0];
// active player
let activePlayer = 0;
// game status
let gameIsOn = true;
// switch next player
const switchPlayer = function () {
  currentScore = 0;
  document.querySelector(`#current--${activePlayer}`).textContent =
    currentScore;
  activePlayer = activePlayer === 0 ? 1 : 0;
  player1El.classList.toggle("player--active");
  player2El.classList.toggle("player--active");
};
// roll dice
rollDice.addEventListener("click", function () {
  if (gameIsOn) {
    // generate a random dice roll
    let diceNum = Math.trunc(Math.random() * 6 + 1);
    // set the dice img to the diceNum
    diceEl.src = `dice-${diceNum}.png`;
    // reveal the rolled dice
    diceEl.classList.remove("hidden");
    // if dice number is equal to 1, switch to the next player
    if (diceNum === 1) {
      switchPlayer();
      // else increment current score and display it
    } else {
      currentScore += diceNum;
      document.querySelector(`#current--${activePlayer}`).textContent =
        currentScore;
    }
  }
});
// hold score
holdScore.addEventListener("click", function () {
  if (gameIsOn) {
    // add the current score to total score
    totalScore[activePlayer] += currentScore;
    // display the total score
    document.querySelector(`#score--${activePlayer}`).textContent =
      totalScore[activePlayer];
    // if score is more than or equal to 100, player wins and game ends
    if (document.querySelector(`#score--${activePlayer}`).textContent >= 100) {
      gameIsOn = false;
      // add player--winner class to the active player
      document
        .querySelector(`.player--${activePlayer}`)
        .classList.add("player--winner");
      // remove active--player class
      document
        .querySelector(`.player--${activePlayer}`)
        .classList.remove("player--active");
      // display the name of the winner
      document.querySelector(`#name--${activePlayer}`).textContent = `Player ${
        activePlayer + 1
      } wins!`;
      // else switch to the next player
    } else {
      switchPlayer();
    }
  }
});
// reset the game and start a new game
newGame.addEventListener("click", function () {
  // reset player 1 stats
  player1El.classList.add("player--active");
  player1El.classList.remove("player--winner");
  player1NameEl.textContent = "Player 1";
  player1CurrentScoreEl.textContent = 0;
  player1TotalScoreEl.textContent = 0;
  // reset player 2 stats
  player2El.classList.remove("player--active");
  player2El.classList.remove("player--winner");
  player2NameEl.textContent = "Player 2";
  player2CurrentScoreEl.textContent = 0;
  player2TotalScoreEl.textContent = 0;
  // hide the dice
  diceEl.classList.add("hidden");
  // set current score to zero
  currentScore = 0;
  // set total score to zero
  totalScore = [0, 0];
  // set active player to zero
  activePlayer = 0;
  // set game status to on
  gameIsOn = true;
});
