
class Question:

    """init function is declared, which contains two attributes"""
    def __init__(self, question, answer):
        self.quizQuestion = question
        self.quizAnswer = answer



newQuestion = Question("2+3=5", True)
print(newQuestion.quizQuestion, newQuestion.quizAnswer)