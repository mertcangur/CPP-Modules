/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:08:16 by mgur              #+#    #+#             */
/*   Updated: 2023/11/08 15:08:16 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, char **argv)
{
	std::string level;
	Harl harl;

	if(argc != 2)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (1);
	}

	level = argv[1];
	harl.complain(level);

}
