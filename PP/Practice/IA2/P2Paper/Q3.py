#Write a program that generate a Quiz and uses two files - Question.txt and 
#Answers.txt The program opens Question.txt and reads question and displays the
#question with options on the screen. The program then opens Answers.txt file and
#displays correct answer.
#consider the following information:

#try except to see if file exists, if it doesnt we make a file with 
#given content

try:
    f = open("Question.txt", "r")
    f.close()

except:
    f = open("Question.txt", "w")
    f.write("What is the full form of CPU?\n1 Central processing Unit\n2 Control processing unit\nWhich of the following computer language is written in binary codes only?\n1 machine language\n2 C\nWhich of the following is the smallest unit of data in a computer?\n1 1Bit\n2 KB")
    f.close()

try: 
    f = open("Answers.txt", "r")
    f.close()

except:
    f = open("Answers.txt", "w")
    f.write("1\n2\n2")
    f.close()

f1 = open("Question.txt", "r")
Question = f1.read()

f2 = open("Answers.txt", "r")
Answers = f2.read()

print(Question)
print("\nAnswers")
print(Answers)

f1.close()
f2.close()