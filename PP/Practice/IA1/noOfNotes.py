n = int(input("Input the amount: "))

print(str(n//100) + " note(s) of hundred rupees")
n = n%100
print(str(n//50) + " note(s) of fifty rupees")
n = n%50
print(str(n//20) + " note(s) of twenty rupees")
n = n%20
print(str(n//10) + " note(s) of ten rupees")
n = n%10
print(str(n//5) + " note(s) of five rupees")
n = n%5
print(str(n//2) + " note(s) of two rupees")
n = n%2
print(str(n) + " note(s) of one rupee")