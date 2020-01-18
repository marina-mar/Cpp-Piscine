/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:00:06 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/17 17:00:07 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
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
ScavTrap::ScavTrap( void )
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
    cout << get_name() << "... l o  a d i n g ... Scav Trap created by default constructor" << endl;
}

ScavTrap::ScavTrap(string one_name) : _name(one_name)
{
    srand (time(NULL));
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 50;
    _maxEnergyPoints = 50;
    _level = 1;
    _meleeAttackDmg = 20;
    _rangedAttackDmg = 15;
    _armorDmgRed = 3;
    cout << _name << "... l o  a d i n g ... Scav Trap created by default constructor" << endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
    *this = copy;
    cout << _name << ". . . loading . . . Scav Trap created by copy constructor" << endl;
}

//deconstructor
ScavTrap::~ScavTrap( void ){
    cout << "Scav Trap " << _name << " destroyed!!!!" << endl;
}

//assign
ScavTrap &ScavTrap::operator=(ScavTrap const &base)
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
void ScavTrap::rangedAttack(std::string const &target)
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
    print("              Hehehehe, mwaa ha ha ha, MWAA HA HA HA!");
    cout << "SCAV TRAP " << this->_name << " RANGE ATTACKED " << target << "!!!!!" << endl;
    cout << target << " suffered " <<  this->_rangedAttackDmg << endl;
    print("attack cost: 10 ENERGY POINTS");
    print("______________________________________________________________________");
}
void ScavTrap::meleeAttack(std::string const &target)
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
    print("                             Heyyah!");
    cout << "SCAV TRAP " << this->_name << " MELEE ATTACKED " << target << "!!!!!" << endl;
    cout << target << " suffered " <<  this->_meleeAttackDmg << endl;
    print("attack cost: 5 ENERGY POINTS");
    print("______________________________________________________________________");
}

void ScavTrap::takeDamage(unsigned int amount)
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
        print("         Come back here! I'll gnaw your legs off!");
    }
    else if (this->_hitPoints >= 50)
    {
        print("             Good thing I don't have a soul!");
    }
    else if (this->_hitPoints > 0)
    {
        print("                 Oh yeah? Well, uh... yeah.");
    }
    else {
        print("                      No, nononono NO!");
    }
    cout << "SCAV TRAP " << this->_name << " GOT ATTACKED" << "!!!!!" << endl;
    cout << "suffered " <<  amount - this->_armorDmgRed << " damage points=(" <<endl;
    cout << "total HP now: " << this->_hitPoints << endl;
    print("______________________________________________________________________");
}

void ScavTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    this->_energyPoints += amount * 2;
    if (this->_hitPoints > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    if (this->_energyPoints > this->_maxEnergyPoints)
        this->_energyPoints = this->_maxEnergyPoints;
    print("______________________________________________________________________");
    print("                    ~~~ You can't keep a good 'bot down!");
    cout << "SCAV TRAP " << this->_name << " got repaired" << "!" << endl;
    cout << amount << " HP recovered" << endl << amount * 2 << " ENERGY recovered" << endl;
    print("______________________________________________________________________");
}

void ScavTrap::challengeNewcomer( void )
{
    string attack_name;
    int random = rand() % 8;

    switch (random)
    {
        case 0:
            print("___________________________fire_challenge______________________________");
            print("                Will you walk on fire to get in?");
            break ;
        case 1:
            print("__________________________ghosts_challenge_____________________________");
            print("There's this cemetery next to here, go there and get me some ghost liquid so you can get in!");
            break ;
        case 2:
            print("____________________________wash_challenge____________________________");
            print("Only the clean can get in! If you survive a shower, I will let you in!");
            break ;
        case 3:
            print("____________________________dog_challenge_____________________________");
            print("     If you bring me a cute nice friendly dog, I'll let you in!");
            break ;
        case 4:
            print("__________________________pieces_challenge_____________________________");
            print("I want you to find me some AP3 machines and get me some memory pieces...");
            break ;
        case 5:
            print("___________________________colors_challenge_____________________________");
            print("    If you change your color to blue, I'll let you in! mua ha ha ha");
            break ;
        case 6:
            print("___________________________robot_challenge_____________________________");
            print("Bring me some other robot to help with the door and I will let you in!");
            break ;
        case 7:
            print("___________________________gold_challenge_____________________________");
            print("I really like shine pieces of gold, If you can get me some we can talk...");
            break ;
    }
    cout << endl;
    print("______________________________________________________________________");
}

//gets

void ScavTrap::get_Status() {
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

int ScavTrap::get_hitPoints( void ) const
{
    return this->_hitPoints;
}
int ScavTrap::get_maxHitPoints( void ) const
{
    return this->_maxHitPoints;
}
int ScavTrap::get_energyPoints( void ) const
{
    return this->_energyPoints;
}
int ScavTrap::get_maxEnergyPoints( void ) const
{
    return this->_maxEnergyPoints;
}
int ScavTrap::get_level( void ) const
{
    return this->_level;
}
int ScavTrap::get_meleeAttackDmg( void ) const
{
    return this->_meleeAttackDmg;
}
int ScavTrap::get_rangedAttackDmg( void ) const
{
    return this->_rangedAttackDmg;
}
int ScavTrap::get_armorDmgRed( void ) const
{
    return this->_armorDmgRed;
}
std::string ScavTrap::get_name( void ) const
{
    return this->_name;
}

//sets
void ScavTrap::set_hitPoints(int new_value){
    this->_hitPoints = new_value;
}
void ScavTrap::set_maxHitPoints(int new_value){
    this->_maxHitPoints = new_value;
}
void ScavTrap::set_energyPoints(int new_value){
    this->_energyPoints = new_value;
}
void ScavTrap::set_maxEnergyPoints(int new_value){
    this->_maxEnergyPoints = new_value;
}
void ScavTrap::set_level(int new_value){
    this->_level = new_value;
}
void ScavTrap::set_meleeAttackDmg(int new_value){
    this->_meleeAttackDmg = new_value;
}
void ScavTrap::set_rangedAttackDmg(int new_value){
    this->_rangedAttackDmg = new_value;
}
void ScavTrap::set_armorDmgRed(int new_value){
    this->_armorDmgRed = new_value;
}
void ScavTrap::set_name(std::string new_value){
    this->_name = new_value;
}
