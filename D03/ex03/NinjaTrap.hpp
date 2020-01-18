/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 19:26:37 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/17 19:26:38 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

class NinjaTrap : public ClapTrap {
public:
    //constructors
    NinjaTrap( void );
    NinjaTrap(std::string one_name);
    NinjaTrap(NinjaTrap const &copy);

    //deconstructor
    ~NinjaTrap( void );

    //assign
    NinjaTrap &operator=(NinjaTrap const &base);

    //action functions
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void ninjaShoebox(FragTrap &obj);
    void ninjaShoebox(ScavTrap &obj);
    void ninjaShoebox(NinjaTrap &obj);
};

#endif
