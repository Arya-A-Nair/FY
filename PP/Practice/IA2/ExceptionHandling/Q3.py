#Develop a program that asks the user to enter their age. Handle the exception when the user enters
#a non-numeric value or a negative age.

class NegativeAgeException(Exception):
    pass

try:
    n = int(input("Enter your age: "))

    if n<0:
        raise NegativeAgeException
    
    else: print(n)

except ValueError:
    print("Wrong input")

except NegativeAgeException:
    print("Invalid age")
