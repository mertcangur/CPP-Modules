/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:07:36 by mgur              #+#    #+#             */
/*   Updated: 2023/11/08 15:07:36 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon &weapon) : _name(name), _weapon(weapon)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack( void )
{
	std::cout << _name << " attacks with their" << _weapon.getType() << std::endl;
}
