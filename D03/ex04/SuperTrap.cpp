/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 19:59:50 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/17 19:59:52 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <fstream>
#include <istream>
#include <sstream>
#include <time.h>

using namespace std;
#define print(x)  cout << x << endl;

//constructors
SuperTrap::SuperTrap( void )
{
    srand (time(NULL));
    set_hitPoints(100);
    set_maxHitPoints(100);
    set_energyPoints(120);
    set_maxEnergyPoints(120);
    set_level(1);
    set_meleeAttackDmg(60);
    set_rangedAttackDmg(20);
    set_armorDmgRed(5);
    cout << get_name() << "... l o  a d i n g ... Super Trap created by default constructor" << endl;
}

SuperTrap::SuperTrap(string one_name)
{
    srand (time(NULL));
    set_name(one_name);
    set_hitPoints(100);
    set_maxHitPoints(100);
    set_energyPoints(120);
    set_maxEnergyPoints(120);
    set_level(1);
    set_meleeAttackDmg(60);
    set_rangedAttackDmg(20);
    set_armorDmgRed(5);
    cout << ScavTrap::ClapTrap::get_name() << "... l o  a d i n g ... Super Trap created by default constructor" << endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy)
{
    srand (time(NULL));
    *this = copy;
    cout << ScavTrap::ClapTrap::get_name() << ". . . loading . . . Super Trap created by copy constructor" << endl;
}

//destructor
SuperTrap::~SuperTrap( void ){
    cout << "Super Trap " << ScavTrap::ClapTrap::get_name() << " destroyed!!!!" << endl;
}

//assign
SuperTrap &SuperTrap::operator=(SuperTrap const &base)
{
    set_hitPoints(base.get_hitPoints());
    set_maxHitPoints(base.get_maxHitPoints());
    set_energyPoints(base.get_energyPoints());
    set_maxEnergyPoints(base.get_maxEnergyPoints());
    set_level(base.get_level());
    set_meleeAttackDmg(base.get_meleeAttackDmg());
    set_rangedAttackDmg(base.get_rangedAttackDmg());
    set_armorDmgRed(base.get_armorDmgRed());
    print("Assignation operator called");
    return *this;
}

//action functions
void SuperTrap::rangedAttack(std::string const &target)
{
    FragTrap::rangedAttack(target);
    return ;
}

void SuperTrap::meleeAttack(std::string const &target)
{
    NinjaTrap::meleeAttack(target);
    return ;
}