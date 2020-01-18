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
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

class ScavTrap {
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
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer( void );

    //gets
    void get_Status( void );
    int get_hitPoints( void ) const;
    int get_maxHitPoints( void ) const;
    int get_energyPoints( void ) const;
    int get_maxEnergyPoints( void ) const;
    int get_level( void ) const;
    int get_meleeAttackDmg( void ) const;
    int get_rangedAttackDmg( void ) const;
    int get_armorDmgRed( void ) const;
    std::string get_name( void ) const;

    //sets
    void set_hitPoints(int new_value);
    void set_maxHitPoints(int new_value);
    void set_energyPoints(int new_value);
    void set_maxEnergyPoints(int new_value);
    void set_level(int new_value);
    void set_meleeAttackDmg(int new_value);
    void set_rangedAttackDmg(int new_value);
    void set_armorDmgRed(int new_value);
    void set_name(std::string new_value);

private:
    int _hitPoints;
    int _maxHitPoints;
    int _energyPoints;
    int _maxEnergyPoints;
    int _level;
    int _meleeAttackDmg;
    int _rangedAttackDmg;
    int _armorDmgRed;
    std::string _name;
};

#endif