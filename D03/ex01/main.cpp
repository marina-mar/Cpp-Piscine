/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:42:17 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/17 14:42:18 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

using namespace std;
#define print(x)  cout << x << endl;

int main( void )
{
    FragTrap a1 = FragTrap("AP7817");
    ScavTrap b1 = ScavTrap("BZZZ22");
    a1.get_Status();
    b1.get_Status();
    a1.meleeAttack("PURPLE AND BLUE MONSTER");
    b1.meleeAttack("some random monster from the river");
    a1.get_Status();
    b1.get_Status();
    a1.rangedAttack("BIG SNAKE");
    b1.rangedAttack("SMALL SNAKE");
    a1.takeDamage(25);
    b1.takeDamage(25);
    a1.get_Status();
    b1.get_Status();
    a1.beRepaired(20);
    b1.beRepaired(20);
    a1.get_Status();
    a1.takeDamage(50);
    b1.takeDamage(50);
    a1.vaulthunter_dot_exe("GREEN EVIL ROBOT");
    b1.challengeNewcomer();
    b1.challengeNewcomer();
    b1.challengeNewcomer();
    b1.challengeNewcomer();
    b1.challengeNewcomer();
    a1.get_Status();
    a1.beRepaired(100);
    b1.beRepaired(100);
    a1.get_Status();
    b1.get_Status();
    a1.takeDamage(200);
    b1.takeDamage(200);
    a1.rangedAttack("BIG SNAKE");
    b1.rangedAttack("SMALL SNAKE");
    a1.get_Status();
    b1.get_Status();
}
