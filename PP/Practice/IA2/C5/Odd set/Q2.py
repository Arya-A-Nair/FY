#Write a NumPy program to get the values and indices of the elements 
#that are bigger than 10 in a given array

#original-->[[0 10 20] [20 30 40]]
#values bigger than 10 = [20 20 30 40]
#their indices are [1 0 1 2]

import numpy as np

arr = np.array([1, 3, 5, 8, 10, 12, 14, 16])
arr2 = []
index = []

for i in range(len(arr)):
    if arr[i] > 10:
        arr2.append(arr[i])
        index.append(i)

print(arr2, index)