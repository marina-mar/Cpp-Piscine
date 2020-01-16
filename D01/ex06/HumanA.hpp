/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:50:19 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 17:50:20 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class HumanA {
 public:
	HumanA (std::string name, Weapon &new_weapon);
	~HumanA( void );
	std::string	name;
	Weapon	&a_weapon;

	void attack( void );
};

#endif