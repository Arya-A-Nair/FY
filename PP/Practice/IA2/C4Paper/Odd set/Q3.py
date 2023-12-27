#WAP to read the A.txt fil. Prepare the A.txt with alphanumeric characters. 
#Cut all digits from file A.txt into another file B.txt. 
#Replace the cut digits to X. Display both file contents.

# if A.txt--> I am Rajesh. I am 18 years old. 
# after operation
# A.txt--> I am Rajesh. I am X years old.
# B.txt--> 18

f1 = open("A.txt", "r")
s = f1.read().split()
f1.close()
content = ""

for i in s:
    if i.isnumeric():
        content+="X"
        content+=" "
        f2 = open("B.txt", "a")
        f2.write(i + " ")
        f2.close()
        
    else: 
        content+=i
        content+=" "

f1 = open("A.txt", "w")
f1.write(content)
f1.close()

f1 = open("A.txt", "r")
Acontent = f1.read()
f1.close()

f2 = open("B.txt", "r")
Bcontent = f2.read()
f2.close()

print(Acontent)
print(Bcontent)

    
