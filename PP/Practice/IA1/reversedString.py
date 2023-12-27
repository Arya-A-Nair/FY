list1 = list(input().split())
list2 = list1
list2.reverse()
list3 = []

for i in list1:
  list3.append(i[::-1])

for i in list2:
  print(i, end=" ")

print()

for i in list3:
  print(i, end=" ")