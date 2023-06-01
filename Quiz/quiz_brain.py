class QuizBrain:

    def __init__(self, qList):
        self.questionNumber = 0
        self.questionList = qList
    
    def nextQuestion(self):
        currentQuestion = self.questionList[self.questionNumber]
        self.questionNumber += 1
        input(f"Q.{self.questionNumber}: {currentQuestion.text} (True/False): ")

    