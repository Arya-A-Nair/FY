n = int(input("Enter number of guests: "))
arr = []
total = 0

for j in range(n):
  i = int(input(f"Enter age of guest {j+1} "))
  if i>2:
    if i <= 12:
      total += 14
    elif i >= 65:
      total += 18
    else: total += 23

print("$" + str(total))