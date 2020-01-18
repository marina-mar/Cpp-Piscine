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

    a1.get_Status();
    a1.meleeAttack("PURPLE AND BLUE MONSTER");
    a1.get_Status();
    a1.rangedAttack("BIG SNAKE");
    a1.get_Status();
    a1.takeDamage(10);
    a1.takeDamage(25);
    a1.get_Status();
    a1.beRepaired(20);
    a1.get_Status();
    a1.takeDamage(50);
    a1.vaulthunter_dot_exe("GREEN EVIL ROBOT");
    a1.vaulthunter_dot_exe("FIRE EVIL ROBOT");
    a1.get_Status();
    a1.beRepaired(100);
    a1.get_Status();
    a1.takeDamage(100);
    a1.get_Status();
}
