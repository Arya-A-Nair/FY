#Write a Python program that takes integer inputs from the user until they enter a non-integer
#value. Handle the ValueError exception to ignore non-integer inputs and continue the loop.

#note: Im guessing teacher framed it wrong so i have done this by my understanding
#We take value till non int is entered :)

n = 0

while n != 2:
    try:
        num = int(input("Enter integer number: "))

    except ValueError:
        print("Enter Integers Only!")
        break