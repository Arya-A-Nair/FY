#Write a program which infinitely takes positive numbers and
#prints their cube, but raise an exception and exit program 
#when a negative number is introduced

class NegativeInputError(Exception):
    pass

n = 0

while n == 0:
    try:
        inp = int(input("Enter a number: "))

        if inp<0:
            raise NegativeInputError
        
        print(inp**3)

    except NegativeInputError:
        print("Negative numbers not allowed!")
        break