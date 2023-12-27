def check_divide(n):
  temp = n

  while temp>0:
    if temp%10 == 0:
      temp = temp//10

    if n%(temp%10) !=0:
      return False

    temp = temp//10

  return True

print(check_divide(128))
print(check_divide(130))
print(check_divide(480))
print(check_divide(129))