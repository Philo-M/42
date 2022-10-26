# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    linreg_predict.py                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 11:24:23 by pmandel           #+#    #+#              #
#    Updated: 2022/10/21 15:43:11 by pmandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import numpy as np
from linreg_train import estimated_price

def	main():
	try:
		thetasAll = np.genfromtxt('theThetas.csv', delimiter = ', ')
	except:
		print('You have to train first')
		return	print('Input the kilometers (' +
			str(f"{thetasAll[1,0]:.0f}") + ' - ' + str(f"{thetasAll[1,1]:.0f}") + ')')

	try:
		value = float(input())
		estimatedPrice = round(estimated_price(thetasAll[3,0], thetasAll[3,1], value), 2)
		if value < thetasAll[1,0] or value > thetasAll[1,1]:
			print('Our linear regression is not pertinent for this number')
		else:
			print('Estimated price: ' + str(f"{estimatedPrice:.2f}"))
		return

	except:
		print('You had to input a integer (without comma), please remember it')
	
if __name__ == '__main__':
	main()