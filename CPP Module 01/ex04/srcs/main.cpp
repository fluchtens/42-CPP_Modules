/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluchten <fluchten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:38:12 by fluchten          #+#    #+#             */
/*   Updated: 2023/03/24 10:55:52 by fluchten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: wrong number of args." << std::endl;
		return (1);
	}
	std::string	file = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
}