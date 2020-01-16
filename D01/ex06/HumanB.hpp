/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:50:36 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 17:50:38 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
public:
	HumanB (std::string name);
	~HumanB( void );
	std::string	name;
	Weapon		*b_weapon;

	void setWeapon(Weapon &name);
	void attack( void );
};

#endif
