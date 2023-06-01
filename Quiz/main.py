## 154. How to create your own class in python, ## 155. Working with attributes, class contructors and the init function,
## 156. Adding methods to a class, 
# """User class is created"""
# class User:
#     """init function is created"""
#     def __init__(self, id, name):
#         self.userId = id
#         self.userName = name
#         self.followers = 0
#         self.following = 0
    
#     """method declared"""
#     def follow(self, user):
#         user.followers += 1
#         self.following += 1


# """user1 object is created"""
# user1 = User("001", "Anshu Sinha")
# print(user1.userId)
# print(user1.userName)
# print(user1.followers)

# """user2 object is created"""
# user2 = User("002", "Sahil Kumar Sinha")
# print(f"{user2.userId}\n{user2.userName}")

# user1.follow(user2)
# print(user1.followers)
# print(user1.following)
# print(user2.followers)
# print(user2.following)

#####

## Day 17: The quiz project
"""imports Question class from question_model module"""
from question_model import Question
"""imports question_data class from data module"""
from data import question_data
"""imports """

"""empty list"""
questionBank = []

"""loops through the question_data and appends questions
and answers to the questionBank list"""
for i in question_data:
    questionBank.append(Question(i["text"], i["answer"]))


