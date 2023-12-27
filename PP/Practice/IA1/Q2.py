import math

def func(a, b):
  if b < len(a):
    return "invalid"

  newstr = "-"*b
  startlen = math.ceil((b-len(a))/2)
  newstr = newstr[:startlen] + a + newstr[(startlen+len(a)):]

  return newstr

print(func("Hello", 19))
print(func("Hello", 10))
print(func("Hello", 2))