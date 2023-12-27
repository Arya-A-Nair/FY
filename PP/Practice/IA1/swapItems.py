test_list = list(eval(input()))

for i in range(0, len(test_list), 2):
  temp = test_list[i]
  test_list[i] = test_list[i+1]
  test_list[i+1] = temp

print(tuple(test_list))