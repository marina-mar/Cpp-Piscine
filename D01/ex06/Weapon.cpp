/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:37:33 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 17:37:36 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

Weapon::Weapon (std::string type) {
	this->type = type;
	return ;
}

const std::string&	Weapon::getType( void ){
	std::string& ref_type = this->type;
	return (ref_type);
}
void				Weapon::setType(std::string type){
	this->type = type;
}

Weapon::~Weapon ( void ){
	return ;
};