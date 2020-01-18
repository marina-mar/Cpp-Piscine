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
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

class FragTrap {
public:
    //constructors
    FragTrap( void );
    FragTrap(std::string one_name);
    FragTrap(FragTrap const &copy);

    //deconstructor
    ~FragTrap( void );

    //assign
    FragTrap &operator=(FragTrap const &base);

    //action functions
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);

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