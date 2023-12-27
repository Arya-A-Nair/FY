binnum = input("Enter binary number: ")
num = 0

for i in range(len(binnum)):
  if binnum[i] == "1":
    num += 2**(len(binnum)-i-1)

print(num)