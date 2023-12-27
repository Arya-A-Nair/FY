#write a program written as follows, Write a program using a try-except
#block to avoid "ZeroDivionError"

x = int(input("Input Number: "))
y = int(input("Input Number: "))

try:
    print(x/y)

except ZeroDivisionError:
    print("Cant divide by zero!")