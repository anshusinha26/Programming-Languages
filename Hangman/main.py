"""imports random module"""
import random
"""prints the initial project text"""
print("Welcome to The Number Guessing Game")
"""print the initial project text"""
print("I'm thinking of a number between 1 and 100.")
"""stores the randomly generated number between 1 and 100, inclusive of 1 and 100"""
answer = random.randint(1, 100)
"""prints the hint to the correct answer"""
print(f"Pssst, the correct answer is {answer}")
"""asks the user to chose the difficulty level"""
difficultyLevel = input("Chose a difficulty level. Type 'e' for easy and 'h' for hard: ").lower()
"""if difficulty level is easy, attempts are set to 10 else attempts are set to 5"""
if (difficultyLevel == 'e'):
    attempts = 10
elif (difficultyLevel == 'h'):
    attempts = 5
"""prints the number of attempts a user has"""
print(f"You have {attempts} attempts remaining to guess the number.")
"""function definition"""
def guessTheNumber():
    """attempts variable is accessed and modified inside this function"""
    global attempts
    """asks the user to make a guess"""
    guess = int(input("Make a guess: "))
    """if guess is lower than the numerical value of the answer, the 'too low' is printed"""
    if (guess < answer):
        print("Too low.")
        """else if the guess is higher then answer, than 'too high' is printed"""
    elif (guess > answer):
        print("Too high.")
    """unitl attempts are bigger than 1, this loop runs"""
    while (attempts > 1):
        """if guess is equal to the answer, the user wins and the loop breaks"""
        if (guess == answer):
            print(f"You got it! The answer was {answer}")
            break
            """else the user is asked to guess again, attempts are deducted by 1 and the function is called again"""
        else:
            print("Guess again.")
            attempts -= 1
            print(f"You have {attempts} attempts remaining to guess the number.")
            guessTheNumber()
    """if attempts is equal to 1, the user runs out of guesses and he loses"""
    if (attempts == 1):
        print("You have run out of guesses, you lose!")
"""initially the function is called"""
guessTheNumber()