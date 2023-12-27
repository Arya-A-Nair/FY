#Implement a program that accepts a user&#39;s input for a numeric value and calculates the square
#root. Handle the exception when the input is not a valid number.

#n>=0
from math import sqrt

n = int(input("Enter number to get square root of: "))
try:
    print(sqrt(n))

except ValueError:
    print("Negative numbers dont have square roots")