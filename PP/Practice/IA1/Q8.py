s = list(input("Enter String: ").split())
endwithvowels = []

for word in s:
    if word[-1]=="a" or word[-1]=="e" or word[-1]=="i" or word[-1]=="o" or word[-1]=="u":
        endwithvowels.append(word)

print(endwithvowels)