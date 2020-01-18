/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 16:59:58 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/17 17:00:00 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

class ScavTrap : public ClapTrap{
public:
    //constructors
    ScavTrap( void );
    ScavTrap(std::string one_name);
    ScavTrap(ScavTrap const &copy);

    //deconstructor
    ~ScavTrap( void );

    //assign
    ScavTrap &operator=(ScavTrap const &base);

    //action functions
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void challengeNewcomer( void );
};

#endif