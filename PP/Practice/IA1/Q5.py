test_list = eval(input("test list= "))
k = int(input("Enter Value of divisor K: "))

list2 = list(filter(lambda a : a[0]%k == 0 and a[1]%k == 0, test_list))

print(list2)