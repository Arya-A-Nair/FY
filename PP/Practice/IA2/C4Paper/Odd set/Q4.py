# WAP to read the working hours of n number of employees with 4 weeks data 
# plans using numpy. Sample shown below
# find-->Shape of employee duty chart
#     -->Sum of hours in month
#     -->Search employeee securing highest working hours

# Name of Employee    week1   week2   week3   week4
# VIPUL                40       40     40      40
# RISHI                42       42     42      42
# VIVEK                45       45     45      45
# VIBHU                38       38     38      38
# VIDITA               30       30     30      30


import numpy as np

file = open("employeedata.txt","r")
#the file name goes above
k = file.readlines() #each line becomes part of an array
#eg. 
#This is the first line
#This is line 2 
#This is line 3
#
#readlines will return 
#["This is the first line", "This is line 2", "This is line 3"]
#
#
ls = []
for i in range(len(k)):
    p = k[i]
    t = p.split()
    ls.append(t)
arr = np.array(ls[1:])
name = list(arr[:, 0])

ls = []
for i in range(len(arr)):
    a = arr[i,1:]
    b = list(a)
    c = map(int,b)
    ls.append(sum(list(c)))
print(ls)
print(f"Max working hours: {name[ls.index(max(ls))]}")