/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:38:38 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 17:38:40 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

HumanB::HumanB(std::string name) {
	this->name = name;
}

void HumanB::setWeapon(Weapon &name) {
	this->b_weapon = &name;
}

void HumanB::attack( void ){
	std::cout << "UA! UA! UA! I'M " << this->name << "!!!!";
	std:: cout << "AND MY " << this->b_weapon->getType() << " WILL KILL YOOOOOU!!!" << std::endl;
}

HumanB::~HumanB( void ){
	return ;
}
