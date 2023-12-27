#Draw a scatter plot with apprpriate label, colour and title.
#for the given data that shows the number of games played nad scores 
#obtained in each instance
#no of games played: 3 5 2 6 7 1 2 7 1
#scores: 80 90 75 80 90 50 65 85 40

import matplotlib.pyplot as plt
import numpy as np

games = np.array([3, 5, 2, 6, 7, 1, 2, 7, 1])
scores = np.array([80, 90, 75, 80, 90, 50, 65, 85, 40])

plt.scatter(games, scores)
plt.title("Scatter plot of Number of games played vs Scores obtained in each game")
plt.xlabel("Number of games played")
plt.ylabel("Scores obtained")
plt.show()