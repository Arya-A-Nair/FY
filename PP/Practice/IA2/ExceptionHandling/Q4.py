#Create a program with a loop that runs until the user enters a specific input. Handle the exception
#if the user provides unexpected input.
class BreakInput(Exception):
    pass

n = 0

while n != 2:
    try:
        n = input("Enter something here (breaks when you enter -1)--> ")

        if n == "-1":
            raise BreakInput
        
        print(n)

    except BreakInput:
        print("Break")
        break