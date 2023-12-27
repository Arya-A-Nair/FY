#ignores zeros

arr = []
c = 0

while c == 0:
  p = int(input())
  if p == -1:
    break;

  else: arr.append(p)

sumeven = 0
sumodd = 0

for i in arr:
  if i>=0:
    if i%2 == 0:
      sumeven += i

    else: sumodd += i

print(sumeven, sumodd)