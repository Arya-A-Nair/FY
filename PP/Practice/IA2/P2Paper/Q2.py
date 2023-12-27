#take a list from the user and check if its in the array, arr =[[10,20,30,40,50],[61,71,81,91,10],[11,12,13,14,15],[16,17,18,19,20]]

arr = [[10,20,30,40,50],[61,71,81,91,10],[11,12,13,14,15],[16,17,18,19,20]]
inp = list(map(int, input("Enter all numbers of list as with digits in spaces (Eg. 1 2 3 4 5 --> [1, 2, 3, 4, 5]): \n").split()))

if inp in arr:
  print("list exists in array")

else: print("list does not exist in array")