/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:20:11 by pmandel           #+#    #+#             */
/*   Updated: 2022/04/06 17:46:56 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <sstream>


int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string		const file(argv[1]);
		std::string 	const s1(argv[2]);
		std::string 	const s2(argv[3]);
		std::ifstream	ifs(file.data());
		std::string		str;
		std::size_t		start(0);
		std::size_t		end(0);

		if (ifs)
		{
			std::string			const file_replace(file + ".replace");
			std::ofstream		ofs(file_replace.data());
			std::ostringstream 	ss;
			ss << ifs.rdbuf();
			str = ss.str();
			ifs.close();
			if (ofs.is_open())
			{
				if (s1 == "")
					ofs << str;
				else
				{
					while (end != std::string::npos)
					{
						end = str.find(s1, start);
						if (end == std::string::npos)
							ofs << str.substr(start, std::string::npos);
						else
						{
							ofs << str.substr(start, end - start);

							ofs << s2;
							start = end + s1.length();
						}
					}
				}
				ofs.close();
			}
		}
	}
	return 0;
}
