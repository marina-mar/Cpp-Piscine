/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:50:09 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 17:50:10 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon &new_weapon) : a_weapon(new_weapon) {
	this->name = name;
}

void HumanA::attack( void ){
	std::cout << "AHHHHHHH! THIS IS " << this->name << "!!!!";
	std:: cout << "I WILL KILL YOU WITH MY " << this->a_weapon.getType() << "!!!!!" << std::endl;
}

HumanA::~HumanA( void ){
	return ;
}