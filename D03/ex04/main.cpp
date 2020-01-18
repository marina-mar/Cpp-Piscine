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
#include "SuperTrap.hpp"
#include "NinjaTrap.hpp"
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
    SuperTrap c1 = SuperTrap("DIPOKK4");
    FragTrap a1 = FragTrap("AAJSKJ");

    c1.get_Status();
    c1.meleeAttack("BLUE SNAKE");
    c1.rangedAttack("MONSTER");
    c1.ninjaShoebox(a1);
    c1.vaulthunter_dot_exe("EVIL ROBOT");
}
