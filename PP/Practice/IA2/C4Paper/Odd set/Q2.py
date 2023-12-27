#Write a Python Program to prepare a bar chart for below given data:
#In a ABC firm consist 400 employes, their saving and frequency of number of 
#employee has shown below

    # |Saving in %| Frequency of number Employee
    # |   20      |   105
    # |   30      |   195
    # |   40      |   27
    # |   50      |   73

#I know the english is horrible blame the teachers

import numpy as np
import matplotlib.pyplot as plt

Savings = np.array([20, 30, 40, 50])
Frequency = np.array([105, 195, 27, 73])

plt.xlabel("Savings in %")
plt.ylabel("Frequency of number employee")

plt.bar(Savings, Frequency)
plt.show()