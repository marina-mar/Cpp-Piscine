/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 19:26:29 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/17 19:26:31 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
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
NinjaTrap::NinjaTrap( void )
{
    srand (time(NULL));
    set_hitPoints(60);
    set_maxHitPoints(60);
    set_energyPoints(120);
    set_maxEnergyPoints(120);
    set_level(1);
    set_meleeAttackDmg(60);
    set_rangedAttackDmg(5);
    set_armorDmgRed(0);
    cout << get_name() << "... l o  a d i n g ... Ninja Trap created by default constructor" << endl;
}

NinjaTrap::NinjaTrap(string one_name)
{
    srand (time(NULL));
    set_hitPoints(60);
    set_maxHitPoints(60);
    set_energyPoints(120);
    set_maxEnergyPoints(120);
    set_level(1);
    set_meleeAttackDmg(60);
    set_rangedAttackDmg(5);
    set_armorDmgRed(0);
    set_name(one_name);
    cout << get_name() << "... l o  a d i n g ... Ninja Trap created by default constructor" << endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy)
{
    srand (time(NULL));
    *this = copy;
    cout <<get_name() << ". . . loading . . . Ninja Trap created by copy constructor" << endl;
}

//deconstructor
NinjaTrap::~NinjaTrap( void ){
    cout << "Ninja Trap " << get_name() << " destroyed!!!!" << endl;
}

//assign
NinjaTrap &NinjaTrap::operator=(NinjaTrap const &base)
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
void NinjaTrap::rangedAttack(std::string const &target)
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
    print("                       SHHHHHHHHHHH! YAH!");
    cout << "NINJA TRAP " << get_name() << " RANGE ATTACKED " << target << "!!!!!" << endl;
    cout << target << " suffered " <<  get_rangedAttackDmg() << endl;
    print("attack cost: 10 ENERGY POINTS");
    print("______________________________________________________________________");
}

void NinjaTrap::meleeAttack(std::string const &target)
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
    print("                       HAH ! HAH ! HAH! YAH!");
    cout << "NINJA TRAP " << get_name() << " MELEE ATTACKED " << target << "!!!!!" << endl;
    cout << target << " suffered " <<  get_meleeAttackDmg() << endl;
    print("attack cost: 5 ENERGY POINTS");
    print("______________________________________________________________________");
}

void NinjaTrap::ninjaShoebox(ScavTrap &obj)
{
    print("_______________________________________________________");
    cout << "Ninja Trap " << get_name() << " sees the Scav Trap" << obj.get_name() << " and breaths deep and ....." << endl;
    cout << "       * Ninja Trap Trows grenade *" << endl;
    cout << "           \"Eat bomb, baddie!\"" << endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &obj)
{
    print("_______________________________________________________");
    cout << "Ninja Trap " << get_name() << " sees the Frag Trap" << obj.get_name() << " and ....." << endl;
    cout << "* Ninja Trap hides very quickly shaking in fear  *" << endl;
    cout << "\"Argh arghargh death gurgle gurglegurgle urgh... death.\"" << endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &obj)
{
    print("_______________________________________________________");
    cout << "Ninja Trap " << get_name() << " sees the other Ninja Trap" << obj.get_name() << " and ....." << endl;
    cout << "* Both run all happy to each other and ninjally hug *" << endl;
    cout << "Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!" << endl;
}