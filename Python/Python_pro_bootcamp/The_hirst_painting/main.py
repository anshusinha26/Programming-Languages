"""
from turtle module, Turtle and Screen classes are imported
"""
import turtle
from turtle import Turtle, Screen

"""random module is imported"""
import random

##### default configurations #####

"""tim object is created"""
tim = Turtle()
"""a turtle shape is provided"""
tim.shape("turtle")
"""speed is set for the turtle object"""
tim.speed("fastest")

"""screen object is created"""
screen = Screen()
"""sets the screen setup"""
screen.setup(1000, 800)

##### ----- #####

##### ----- #####

# """function to create a square"""
# def timMakeSquare(x, y):
#     for i in range(4):
#         tim.forward(100)
#         tim.right(90)
#     tim.hideturtle()
#     screen.exitonclick()
#
# """function will be called on screen click"""
# screen.onscreenclick(timMakeSquare, 1)
# turtle.mainloop()

##### ----- #####

##### ----- #####

# """function to create a dashed line"""
# def timDashedLine(x, y):
#     for i in range(10):
#         tim.pendown()
#         tim.forward(10)
#         tim.penup()
#         tim.forward(10)
#     tim.hideturtle()
#     screen.exitonclick()
#
# """function called on screen click"""
# screen.onscreenclick(timDashedLine, 1)
# turtle.mainloop()

##### ----- #####

##### ----- #####

# """function to create different sizes i.e from triangle to decagon"""
# def timMakeDifferentPolygons(x, y):
#     def timMakePolygon(angle, color):
#         tim.color(color)
#         tim.forward(100)
#         tim.right(angle)
#
#     colors = ["#ade8f4", "#90e0ef", "#48cae4", "#00b4d8", "#0096c7", "#0077b6", "#023e8a", "#03045e"]
#     count = 0
#     for i in range(3, 11):
#         color = colors[count]
#         for j in range(0, i):
#             timMakePolygon(360/i, color)
#         count += 1
#
#     tim.hideturtle()
#     screen.exitonclick()
#
# """function called on screen click"""
# screen.onscreenclick(timMakeDifferentPolygons, 1)
# turtle.mainloop()

##### ----- #####

##### ----- #####

# """function to create a random walk"""
# def timRandomWalk(x, y):
#     # tim's configurations
#     turtle.colormode(255)
#     tim.pensize(20)
#
#     directions = [0, 90, 180, 270]
#     pensizes = [10, 15, 20, 25, 20]
#     distances = [20, 25, 30, 35, 40]
#     # colors = ["#19381F", "#EEE82C", "#91CB3E", "#53A548", "#C8AB83", "#F7BFB4", "#9CBFA7",
#     #           "#71697A", "#BF4E30", "#FFD9DA", "#B5DFCA", "#FCFAFA", "#FFD166", "#FF47DA",
#     #           "#3DD6D0", "#881600", "#F08A4B", "#011936", "#F7F052", "#050401"]
#     def generateColor():
#         red = random.randint(0, 255)
#         green = random.randint(0, 255)
#         blue = random.randint(0, 255)
#         color = (red, green, blue)
#         return color
#
#     for i in range(200):
#         tim.color(generateColor())
#         tim.setheading(random.choice(directions))
#         tim.pensize(random.choice(pensizes))
#         tim.forward(random.choice(distances))
#
#     tim.hideturtle()
#     screen.exitonclick()
#
# """function called on screen click"""
# screen.onscreenclick(timRandomWalk, 1)
# turtle.mainloop()

##### ----- #####

##### ----- #####

# """function to draw a spirograph"""
# def timDrawSpirograph(x, y):
#     # tim's configurations
#     turtle.colormode(255)
#
#     def generateRandomColor():
#         red = random.randint(0, 255)
#         blue = random.randint(0, 255)
#         green = random.randint(0, 255)
#         color = (red, green, blue)
#         return color
#
#     for i in range(180):
#         tim.color(generateRandomColor())
#         tim.circle(100)
#         tim.setheading(tim.heading() + 2)
#
#     tim.hideturtle()
#     screen.exitonclick()
#
# """function called on screen click"""
# screen.onscreenclick(timDrawSpirograph, 1)
# turtle.mainloop()

##### ----- #####

##### ----- #####

# ##### day18: The Hirst painting project
# """function to create hirst painting"""
# def timCreateHirstPainting(x, y):
#     """
#     imports colorgram module
#
#     The colorgram module is a third-party library in Python that can be used
#     to extract colors from an image. It works by analyzing an image file and
#     creating a list of the dominant colors present in the image, along with
#     their RGB values. This can be useful in a variety of applications, such
#     as generating color palettes or analyzing the color composition of an
#     image. In the code provided, the colorgram module is used to extract a
#     list of 50 dominant colors from the image1.jpg file, which are then used
#     to randomly color the dots in the turtle graphic.
#     """
#     import colorgram
#
#     """extracts and stores 50 colors from the provided image"""
#     colors = colorgram.extract("image1.jpg", 50)
#
#     """rgbColors list"""
#     colorList = []
#
#     """loop runs and appends all the colors as rgb value in rgbColors list"""
#     for color in colors:
#         red = color.rgb.r
#         green = color.rgb.g
#         blue = color.rgb.b
#         rgbColor = (red, green, blue)
#         colorList.append(rgbColor)
#
#     # tim's configurations
#     turtle.colormode(255)
#     tim.penup()
#     tim.goto(-200, -200)
#
#     dotsNumber = 100
#
#     for dot in range(1, dotsNumber + 1):
#         tim.dot(20, random.choice(colorList))
#         tim.forward(40)
#
#         if dot % 10 == 0:
#             tim.setheading(90)
#             tim.forward(40)
#             tim.setheading(180)
#             tim.forward(400)
#             tim.setheading(0)
#
#     tim.hideturtle()
#     screen.exitonclick()
#
# """function called on screen click"""
# screen.onscreenclick(timCreateHirstPainting, 1)
# turtle.mainloop()

##### ----- #####
