/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:00:36 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/04 18:59:20 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	ft_upper(std::string str)
{
	unsigned long	i(0);

	for (i = 0 ; i < str.length() ; i++)
		str[i] = std::toupper(str[i]);
	
	return str;
}

int	main(int argc, char **argv)
{
	int i(0);

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			std::string	str(argv[i]);
			std::cout << ft_upper(str);
		}
	}
	std::cout << std::endl;
	return 0;
}