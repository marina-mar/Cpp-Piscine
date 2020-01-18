/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 18:17:47 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/17 18:17:48 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
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
ClapTrap::ClapTrap( void )
{
    _hitPoints = 0;
    _maxHitPoints = 0;
    _energyPoints = 0;
    _maxEnergyPoints = 0;
    _level = 0;
    _meleeAttackDmg = 0;
    _rangedAttackDmg = 0;
    _armorDmgRed = 0;
    _name = "";
    cout << _name << "ClapTrap created by default constructor" << endl;
}

ClapTrap::ClapTrap(string one_name) : _name(one_name)
{
    _hitPoints = 0;
    _maxHitPoints = 0;
    _energyPoints = 0;
    _maxEnergyPoints = 0;
    _level = 0;
    _meleeAttackDmg = 0;
    _rangedAttackDmg = 0;
    _armorDmgRed = 0;
    cout << _name << "ClapTrap created by string constructor" << endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    *this = copy;
    cout << _name << "Clap Trap created by copy constructor" << endl;
}

//destructor
ClapTrap::~ClapTrap( void ){
    cout << "Clap Trap " << _name << " destroyed!!!!" << endl;
}

//assign
ClapTrap &ClapTrap::operator=(ClapTrap const &base)
{
    _hitPoints = base.get_hitPoints();
    _maxHitPoints = base.get_maxHitPoints();
    _energyPoints = base.get_energyPoints();
    _maxEnergyPoints = base. get_maxEnergyPoints();
    _level = base.get_level();
    _meleeAttackDmg = base.get_meleeAttackDmg();
    _rangedAttackDmg = base.get_rangedAttackDmg();
    _armorDmgRed = base.get_armorDmgRed();
    print("Assignation operator called");
    return *this;
}

//action functions
void ClapTrap::takeDamage(unsigned int amount)
{
    if ((amount - this->_armorDmgRed) > 0)
        this->_hitPoints -= amount - this->_armorDmgRed;
    else
    {
        print("MY ARMOUR BLOCKED THIS ATTACK!");
    }
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    print("______________________________________________________________________");
    if (this->_hitPoints >= 80)
    {
        print("                   My robotic flesh! AAHH! ");
    }
    else if (this->_hitPoints >= 50)
    {
        print("                   Why do I even feel pain?!");
    }
    else if (this->_hitPoints > 0)
    {
        print("                      Woah! Oh! Jeez!");
    }
    else {
        print("             I'll die the way I lived: annoying!");
    }
    cout << "CLAP TRAP " << this->_name << " GOT ATTACKED" << "!!!!!" << endl;
    cout << "suffered " <<  amount - this->_armorDmgRed << " damage points=(" <<endl;
    cout << "total HP now: " << this->_hitPoints << endl;
    print("______________________________________________________________________");
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    this->_energyPoints += amount * 2;
    if (this->_hitPoints > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    if (this->_energyPoints > this->_maxEnergyPoints)
        this->_energyPoints = this->_maxEnergyPoints;
    print("______________________________________________________________________");
    print("                    ~~~ Sweet life juice!");
    cout << "CLAP TRAP " << this->_name << " got repaired" << "!" << endl;
    cout << amount << " HP recovered" << endl << amount * 2 << " ENERGY recovered" << endl;
    print("______________________________________________________________________");
}

//gets
void ClapTrap::get_Status() {
    print("_______status________");
    cout << "Name: " << get_name() << endl;
    cout << "HP: " << get_hitPoints() << endl;
    cout << "MAX HP: "<< get_maxHitPoints() << endl;
    cout << "ENERGY: "<< get_energyPoints() << endl;
    cout << "MAX ENERGY: "<< get_maxEnergyPoints() << endl;
    cout << "LEVEL: "<< get_level() << endl;
    cout << "MELEE DAMAGE: "<< get_meleeAttackDmg() << endl;
    cout << "RANGE DAMAGE: "<< get_rangedAttackDmg() << endl;
    cout << "ARMOR DAMAGE: "<< get_armorDmgRed() << endl;
    print("_____________________");
}

int ClapTrap::get_hitPoints( void ) const
{
    return this->_hitPoints;
}
int ClapTrap::get_maxHitPoints( void ) const
{
    return this->_maxHitPoints;
}
int ClapTrap::get_energyPoints( void ) const
{
    return this->_energyPoints;
}
int ClapTrap::get_maxEnergyPoints( void ) const
{
    return this->_maxEnergyPoints;
}
int ClapTrap::get_level( void ) const
{
    return this->_level;
}
int ClapTrap::get_meleeAttackDmg( void ) const
{
    return this->_meleeAttackDmg;
}
int ClapTrap::get_rangedAttackDmg( void ) const
{
    return this->_rangedAttackDmg;
}
int ClapTrap::get_armorDmgRed( void ) const
{
    return this->_armorDmgRed;
}
std::string ClapTrap::get_name( void ) const
{
    return this->_name;
}

//sets
void ClapTrap::set_hitPoints(int new_value){
    this->_hitPoints = new_value;
}
void ClapTrap::set_maxHitPoints(int new_value){
    this->_maxHitPoints = new_value;
}
void ClapTrap::set_energyPoints(int new_value){
    this->_energyPoints = new_value;
}
void ClapTrap::set_maxEnergyPoints(int new_value){
    this->_maxEnergyPoints = new_value;
}
void ClapTrap::set_level(int new_value){
    this->_level = new_value;
}
void ClapTrap::set_meleeAttackDmg(int new_value){
    this->_meleeAttackDmg = new_value;
}
void ClapTrap::set_rangedAttackDmg(int new_value){
    this->_rangedAttackDmg = new_value;
}
void ClapTrap::set_armorDmgRed(int new_value){
    this->_armorDmgRed = new_value;
}
void ClapTrap::set_name(std::string new_value){
    this->_name = new_value;
}
