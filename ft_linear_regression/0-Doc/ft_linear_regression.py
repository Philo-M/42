import numpy as np
import matplotlib.pyplot as plt

# f = open("data.csv", "r")
# content = f.read()

ratioDApprentissage = 0.01
global theta0
global theta1
theta0 = 0
theta1 = 0
tmptheta0 = 1
tmptheta1 = 1

data_all = np.genfromtxt('data.csv', delimiter=',')
data = data_all[1:]
m = len(data)

val_max = np.amax(data, axis = 0)
print(val_max)
# val_min = np.amin(data, axis = 0)
# print(val_min)

# val_max = np.amax(data[:,0], axis = 0)
# print(val_max)

# print(data[:,0])
# print(data[:,1])
# print(val_max)
# print(val_max[0])
# print(val_max[1])

# print(data[:,0] / val_max[0])
# print(data[:,1] / val_max[1])
dataMin = data.copy()

dataMin[:,0] = data[:,0] / val_max[0]
# dataMin[:,1] = data[:,1] / val_max[1]

# print(dataMin)

def prixEstime(km):
	# print("theta0 PE: ", theta0)
	# print("theta1 PE: ", theta1)
	prixE = theta0 + theta1 * km
	return (prixE)

k = 0
while (abs(tmptheta0) > 0.004 and abs(tmptheta1) > 0.004):
	tmptheta0 = ratioDApprentissage * (1 / m) * \
			sum(prixEstime(dataMin[i, 0]) - dataMin[i, 1] for i in range (m))
	tmptheta1 = ratioDApprentissage * (1 / m) * \
			sum((prixEstime(dataMin[i, 0]) - dataMin[i, 1]) * dataMin[i, 0] for i in range (m))
	theta0 = theta0 - tmptheta0
	theta1 = theta1 - tmptheta1
	# print("tmptheta0 boucle: ", tmptheta0)
	# print("tmptheta1 boucle: ", tmptheta1)
	# print("theta0 boucle: ", theta0)
	# print("theta1 boucle: ", theta1)
	k = k + 1
	print(k)

theta1 = theta1 / val_max[0]

xpoints = np.array(data[0:m, 0])
ypoints = np.array(data[0:m, 1])

x = np.linspace(0, val_max[0])
y = theta0 + theta1 * x

plt.grid()
plt.scatter(xpoints, ypoints)
plt.plot(x, theta0 + theta1 * x)
plt.show()

