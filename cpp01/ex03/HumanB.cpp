/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:07:44 by mgur              #+#    #+#             */
/*   Updated: 2023/11/08 15:07:44 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

static Weapon noWeapon("No weapon");

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	_weapon = &noWeapon;
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack( void )
{
	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}
