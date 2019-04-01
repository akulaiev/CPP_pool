/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaiev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 19:51:52 by akulaiev          #+#    #+#             */
/*   Updated: 2019/04/01 19:51:53 by akulaiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
		{
			j = -1;
			while (argv[i][++j])
				std::cout << (char)std::toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
