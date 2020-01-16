/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:40:56 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 17:40:57 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Weapon {
 public:
	Weapon(std::string type);
	~Weapon( void );
	const std::string&	getType( void );
	void				setType(std::string type);

 private:
	std::string type;
};

#endif