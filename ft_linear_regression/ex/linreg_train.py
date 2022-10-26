# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    linreg_train.py                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 11:22:41 by pmandel           #+#    #+#              #
#    Updated: 2022/09/07 13:36:21 by pmandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import numpy as np
import matplotlib.pyplot as plt
from sys import argv

def	csv_data(fileName):
	dataAll = np.genfromtxt(fileName, delimiter=',')
	data = dataAll[1:]
	return (data)

def	format_data(data):
	valMax = np.amax(data, axis = 0)
	dataMin = data.copy()
	dataMin[:,0] = data[:,0] / valMax[0]
	return (dataMin)

def estimated_price(theta0, theta1, km):
	prixE = theta0 + theta1 * km
	return (prixE)

def thetas_calc(dataMin):
	global theta0
	global theta1
	theta0 = 0
	theta1 = 0
	m = len(dataMin)
	tmptheta0 = 1
	tmptheta1 = 1
	ratioDApprentissage = 0.01

	# k = 0
	while (abs(tmptheta0) > 0.001 and abs(tmptheta1) > 0.001):
		tmptheta0 = ratioDApprentissage * (1 / m) * \
				sum(estimated_price(theta0, theta1, dataMin[i, 0]) - dataMin[i, 1] for i in range (m))
		tmptheta1 = ratioDApprentissage * (1 / m) * \
				sum((estimated_price(theta0, theta1, dataMin[i, 0]) - dataMin[i, 1]) * dataMin[i, 0] for i in range (m))
		theta0 = theta0 - tmptheta0
		theta1 = theta1 - tmptheta1
	# 	k += 1
	# print(k)

def	thetas_save(data):
	global theta0
	global theta1
	
	valMin = np.amin(data, axis = 0)
	valMax = np.amax(data, axis = 0)
	theta1 = theta1 / valMax[0]

	f = open("theThetas.csv", "w")
	f.write("km min, km max\n" + str(valMin[0]) + ", " + str(valMax[0]) + "\n" + 
			"theta0, theta1\n" + str(theta0) + ", " + str(theta1))
	f.close()

def	graph(data):
	global theta0
	global theta1
	m = len(data)
	
	valMin = np.amin(data, axis = 0)
	valMax = np.amax(data, axis = 0)
	
	x = np.linspace(valMin[0], valMax[0], num = 2)
	y = theta0 + theta1 * x

	plt.grid()
	plt.scatter(data[0:m, 0], data[0:m, 1])
	plt.plot(x, y)
	plt.show()

def	main():
	if len(argv)!= 2:
		print('You must input one and only one argument: the data filename')
		return
	else:
		fileName = argv[1]
	try:
		data = csv_data(fileName)
		dataMin = format_data(data)
		thetas_calc(dataMin)
		thetas_save(data)
		graph(data)
	except:
		print("Your file cannot be found or hasn't got the right format")
if __name__ == '__main__':
	main()