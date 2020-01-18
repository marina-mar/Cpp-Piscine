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

ScavTrap::ScavTrap(string one_name)
{
    srand (time(NULL));
    set_name(one_name);
    set_hitPoints(100);
    set_maxHitPoints(100);
    set_energyPoints(50);
    set_maxEnergyPoints(50);
    set_level(1);
    set_meleeAttackDmg(20);
    set_rangedAttackDmg(15);
    set_armorDmgRed(3);
    cout << get_name() << "... l o  a d i n g ... Scav Trap created by default constructor" << endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
    srand (time(NULL));
    *this = copy;
    cout << get_name() << ". . . loading . . . Scav Trap created by copy constructor" << endl;
}

//destructor
ScavTrap::~ScavTrap( void ){
    cout << "Scav Trap " << get_name() << " destroyed!!!!" << endl;
}

//assign
ScavTrap &ScavTrap::operator=(ScavTrap const &base)
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
void ScavTrap::rangedAttack(std::string const &target)
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
    print("              Hehehehe, mwaa ha ha ha, MWAA HA HA HA!");
    cout << "SCAV TRAP " << get_name() << " RANGE ATTACKED " << target << "!!!!!" << endl;
    cout << target << " suffered " <<  get_rangedAttackDmg() << endl;
    print("attack cost: 10 ENERGY POINTS");
    print("______________________________________________________________________");
}
void ScavTrap::meleeAttack(std::string const &target)
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
    print("                             Heyyah!");
    cout << "SCAV TRAP " << get_name() << " MELEE ATTACKED " << target << "!!!!!" << endl;
    cout << target << " suffered " <<  get_meleeAttackDmg() << endl;
    print("attack cost: 5 ENERGY POINTS");
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