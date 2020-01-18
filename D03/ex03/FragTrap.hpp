/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:42:10 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/17 14:42:11 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

class FragTrap : public ClapTrap {
public:
    //constructors
    FragTrap( void );
    FragTrap(std::string one_name);
    FragTrap(FragTrap const &copy);

    //deconstructor
    ~FragTrap( void );

    //assign
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    FragTrap &operator=(FragTrap const &base);

    //action functions
    void vaulthunter_dot_exe(std::string const & target);
};

#endif