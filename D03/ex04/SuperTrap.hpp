/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 19:59:57 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/17 19:59:58 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SuperTrap_HPP
#define SuperTrap_HPP
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

class SuperTrap : public NinjaTrap, public  FragTrap{
public:
    //constructors
    SuperTrap( void );
    SuperTrap(std::string one_name);
    SuperTrap(SuperTrap const &copy);

    //deconstructor
    ~SuperTrap( void );

    //assign
    SuperTrap &operator=(SuperTrap const &base);

    //action functions
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
};

#endif
