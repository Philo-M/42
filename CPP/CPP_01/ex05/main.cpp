/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:38:13 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/06 12:09:08 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harly;

	harly.complain("debug");
	harly.complain("info");
	harly.complain("warning");
	harly.complain("error");

	return 0;
}