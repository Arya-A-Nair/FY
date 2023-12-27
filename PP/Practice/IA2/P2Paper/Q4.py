#Q2 B (I dont remember full)
#we have to plot the line or curve for the quadratic equation in range [-5: 5] and plot a bar chart for some company
#makea  bar chart using given data
#categories = ["Category A", "Category B" .... "category E"]
#values [15, 10, 5, 12, 8]

import matplotlib.pyplot as plt
import numpy as np

x = np.array([i for i in range(-5, 6)])
y = np.array([i**2 for i in range(-5, 6)])
plt.subplot(2, 2, 1)
plt.plot(x, y)

categories = np.array(["Category A", "Category B", "Category C", "Category D", "Category E"])
values = [15, 10, 5, 12, 8]
plt.subplot(2, 2, 3)
plt.bar(categories, values)
plt.show()