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
#include "NinjaTrap.hpp"
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
    NinjaTrap c1 = NinjaTrap("CAP*90");
    NinjaTrap c2 = NinjaTrap("COI*92");

    a1.get_Status();
    b1.get_Status();
    c1.get_Status();
    c1.meleeAttack("PURPLE AND BLUE MONSTER");
    c1.takeDamage(200);
    c1.rangedAttack("BIG SNAKE");
    c1.beRepaired(100);
    c1.get_Status();
    c1.ninjaShoebox(a1);
    c1.ninjaShoebox(b1);
    c1.ninjaShoebox(c2);
    c1.get_Status();
}
