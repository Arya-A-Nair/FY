pos = 0
neg = 0
zer = 0

x = eval(input())

for i in x:
  if i>0: pos += 1
  elif i<0: neg += 1
  else: zer += 1

print(pos, neg, zer)