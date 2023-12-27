#prepare pie chart for following data:
# Saving in %
# 20
# 30
# 40
# 50

# Frequency of Number Employee
# 56
# 97
# 34
# 60

#Note: This solution maybe wrong due to lack of context in
#Question: Blame the teachers please


import numpy as np
import matplotlib.pyplot as plt

saving = np.array([20, 30, 40, 50])
Freq = np.array([56, 97, 34, 60])

plt.title("Financial Analysis of Prolog Employee")
plt.pie(Freq, labels=saving)
plt.show()