/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:42:01 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/17 14:42:02 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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
FragTrap::FragTrap( void )
{
    srand (time(NULL));
    set_hitPoints(100);
    set_maxHitPoints(100);
    set_energyPoints(100);
    set_maxEnergyPoints(100);
    set_level(1);
    set_meleeAttackDmg(30);
    set_rangedAttackDmg(20);
    set_armorDmgRed(5);
    cout << get_name() << "... l o  a d i n g ... Frag Trap created by default constructor" << endl;
}

FragTrap::FragTrap(string one_name) : _name(one_name)
{
    srand (time(NULL));
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 100;
    _maxEnergyPoints = 100;
    _level = 1;
    _meleeAttackDmg = 30;
    _rangedAttackDmg = 20;
    _armorDmgRed = 5;
    cout << _name << "... l o  a d i n g ... Frag Trap created by default constructor" << endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
    *this = copy;
    cout << _name << ". . . loading . . . Frag Trap created by copy constructor" << endl;
}

//deconstructor
FragTrap::~FragTrap( void ){
    cout << "Frag Trap " << _name << " destroyed!!!!" << endl;
}

//assign
FragTrap &FragTrap::operator=(FragTrap const &base)
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
void FragTrap::rangedAttack(std::string const &target)
{
    if (this->_energyPoints < 10)
    {
        print(".... not enough energy for attack ....");
        return ;
    }
    else if (this->_hitPoints == 0)
    {
        print(".... not enough HP for attack ....");
        return ;
    }
    this->_energyPoints -= 10;
    print("______________________________________________________________________");
    print("Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!");
    cout << "FR4G-TP " << this->_name << " RANGE ATTACKED " << target << "!!!!!" << endl;
    cout << target << " suffered " <<  this->_rangedAttackDmg << endl;
    print("attack cost: 10 ENERGY POINTS");
    print("______________________________________________________________________");
}
void FragTrap::meleeAttack(std::string const &target)
{
    if (this->_energyPoints < 5)
    {
        print(".... not enough energy for attack ....");
        return ;
    }
    else if (this->_hitPoints == 0)
    {
        print(".... not enough HP for attack ....");
        return ;
    }
    this->_energyPoints -= 5;
    print("______________________________________________________________________");
    print("  Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!!!!!!!!!!!!!!!!!");
    cout << "FR4G-TP " << this->_name << " MELEE ATTACKED " << target << "!!!!!" << endl;
    cout << target << " suffered " <<  this->_meleeAttackDmg << endl;
    print("attack cost: 5 ENERGY POINTS");
    print("______________________________________________________________________");
}

void FragTrap::takeDamage(unsigned int amount)
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
    cout << "FR4G-TP " << this->_name << " GOT ATTACKED" << "!!!!!" << endl;
    cout << "suffered " <<  amount - this->_armorDmgRed << " damage points=(" <<endl;
    cout << "total HP now: " << this->_hitPoints << endl;
    print("______________________________________________________________________");
}

void FragTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    this->_energyPoints += amount * 2;
    if (this->_hitPoints > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    if (this->_energyPoints > this->_maxEnergyPoints)
        this->_energyPoints = this->_maxEnergyPoints;
    print("______________________________________________________________________");
    print("                    ~~~ Sweet life juice!");
    cout << "FR4G-TP " << this->_name << " got repaired" << "!" << endl;
    cout << amount << " HP recovered" << endl << amount * 2 << " ENERGY recovered" << endl;
    print("______________________________________________________________________");
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    string attack_name;
    int random = rand() % 5;

    if (this->_energyPoints < 25)
    {
        print(".... not enough energy for attack ....");
        return ;
    }
    else if (this->_hitPoints == 0)
    {
        print(".... not enough HP for attack ....");
        return ;
    }
    this->_energyPoints -= 25;
    switch (random)
    {
        case 0:
            print("____________________________fire_attack_______________________________");
            print("                         Burn, baby, burn!");
            attack_name = "FIRE ATTACKED";
            break ;
        case 1:
            print("____________________________Shock_attack_______________________________");
            print("                       Lightening! Kukachow!");
            attack_name = "SHOCK ATTACKED";
            break ;
        case 2:
            print("__________________________Corrosive_attack_____________________________");
            print("                 I'm a mean, green, acid machine!");
            attack_name = "CORROSIVE ATTACKED";
            break ;
        case 3:
            print("______________________________Ice_attack_______________________________");
            print("             Know what killed the baddies? The Ice age.");
            attack_name = "ICE ATTACKED";
            break ;
        case 4:
            print("___________________________Multiple_attack_______________________________");
            print("                I am a tornado of death and bullets!");
            attack_name = "MULTIPLE TIMES ATTACKED";
            break ;
    }
    cout << "FR4G-TP " << this->_name << " " << attack_name << " "<< target << "!!!!!" << endl;
    cout << target << " suffered 50" << endl;
    print("attack cost: 25 ENERGY POINTS");
    print("______________________________________________________________________");
}

//gets

void FragTrap::get_Status() {
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

int FragTrap::get_hitPoints( void ) const
{
    return this->_hitPoints;
}
int FragTrap::get_maxHitPoints( void ) const
{
    return this->_maxHitPoints;
}
int FragTrap::get_energyPoints( void ) const
{
    return this->_energyPoints;
}
int FragTrap::get_maxEnergyPoints( void ) const
{
    return this->_maxEnergyPoints;
}
int FragTrap::get_level( void ) const
{
    return this->_level;
}
int FragTrap::get_meleeAttackDmg( void ) const
{
    return this->_meleeAttackDmg;
}
int FragTrap::get_rangedAttackDmg( void ) const
{
    return this->_rangedAttackDmg;
}
int FragTrap::get_armorDmgRed( void ) const
{
    return this->_armorDmgRed;
}
std::string FragTrap::get_name( void ) const
{
    return this->_name;
}

//sets
void FragTrap::set_hitPoints(int new_value){
    this->_hitPoints = new_value;
}
void FragTrap::set_maxHitPoints(int new_value){
    this->_maxHitPoints = new_value;
}
void FragTrap::set_energyPoints(int new_value){
    this->_energyPoints = new_value;
}
void FragTrap::set_maxEnergyPoints(int new_value){
    this->_maxEnergyPoints = new_value;
}
void FragTrap::set_level(int new_value){
    this->_level = new_value;
}
void FragTrap::set_meleeAttackDmg(int new_value){
    this->_meleeAttackDmg = new_value;
}
void FragTrap::set_rangedAttackDmg(int new_value){
    this->_rangedAttackDmg = new_value;
}
void FragTrap::set_armorDmgRed(int new_value){
    this->_armorDmgRed = new_value;
}
void FragTrap::set_name(std::string new_value){
    this->_name = new_value;
}