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

FragTrap::FragTrap(string one_name)
{
    srand (time(NULL));
    set_name(one_name);
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

FragTrap::FragTrap(FragTrap const &copy)
{
    srand (time(NULL));
    *this = copy;
    cout <<get_name() << ". . . loading . . . Frag Trap created by copy constructor" << endl;
}

//deconstructor
FragTrap::~FragTrap( void ){
    cout << "Frag Trap " << get_name() << " destroyed!!!!" << endl;
}

//assign
FragTrap &FragTrap::operator=(FragTrap const &base)
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
void FragTrap::rangedAttack(std::string const &target)
{
    if (get_energyPoints() < 10)
    {
        print(".... not enough energy for attack ....");
        return ;
    }
    else if (get_hitPoints() == 0)
    {
        print(".... not enough HP for attack ....");
        return ;
    }
    set_energyPoints(get_energyPoints() - 10);
    print("______________________________________________________________________");
    print("Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!");
    cout << "FR4G-TP " << get_name() << " RANGE ATTACKED " << target << "!!!!!" << endl;
    cout << target << " suffered " <<  get_rangedAttackDmg() << endl;
    print("attack cost: 10 ENERGY POINTS");
    print("______________________________________________________________________");
}

void FragTrap::meleeAttack(std::string const &target)
{
    if (get_energyPoints() < 5)
    {
        print(".... not enough energy for attack ....");
        return ;
    }
    else if (get_hitPoints() == 0)
    {
        print(".... not enough HP for attack ....");
        return ;
    }
    set_energyPoints(get_energyPoints() - 5);
    print("______________________________________________________________________");
    print("  Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!!!!!!!!!!!!!!!!!");
    cout << "FR4G-TP " << get_name() << " MELEE ATTACKED " << target << "!!!!!" << endl;
    cout << target << " suffered " <<  get_meleeAttackDmg() << endl;
    print("attack cost: 5 ENERGY POINTS");
    print("______________________________________________________________________");
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    string attack_name;
    int random = rand() % 5;

    if (get_energyPoints() < 25)
    {
        print(".... not enough energy for attack ....");
        return ;
    }
    else if (get_hitPoints() == 0)
    {
        print(".... not enough HP for attack ....");
        return ;
    }
    set_energyPoints(get_energyPoints() - 25);
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
    cout << "FR4G-TP " << get_name() << " " << attack_name << " "<< target << "!!!!!" << endl;
    cout << target << " suffered 50" << endl;
    print("attack cost: 25 ENERGY POINTS");
    print("______________________________________________________________________");
}