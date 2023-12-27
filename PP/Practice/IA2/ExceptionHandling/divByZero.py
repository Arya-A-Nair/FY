#Q1 A
#x = 8 
#y = 0 
#print(x/y) 
#use try and except block for to avoid "ZeroDivisionError" and print the end at the end

x = int(input("Enter numerator: "))
y = int(input("Enter denominator: "))

try:
    print(x/y)

except ZeroDivisionError:
    print("0 cannot be in the denominator!")