/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:35:55 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/14 21:35:56 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

int main ( void ){
	std::string type = "SCARY";
	std::string name = "Toledo";
	ZombieEvent zombie_night = ZombieEvent();
	zombie_night.setZombieType(type);
	Zombie *my_zombie = zombie_night.newZombie(name);
	my_zombie->announce();
	zombie_night.randomChump();
	zombie_night.setZombieType("C U T E");
	zombie_night.randomChump();
	zombie_night.setZombieType("random");
	zombie_night.randomChump();
	delete my_zombie;
	std::cout << "\033[0;32m_____________________________________" << std::endl;
	std::cout << "Just deleted the allocated zombie! =(" << std::endl;
	std::cout << "_____________________________________" << std::endl;
}
