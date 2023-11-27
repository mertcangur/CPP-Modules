/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:07:46 by mgur              #+#    #+#             */
/*   Updated: 2023/11/08 15:07:46 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB
{
	private:
		std::string	_name;
		Weapon	*_weapon;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		~HumanB();

		void attack();
};


#endif
