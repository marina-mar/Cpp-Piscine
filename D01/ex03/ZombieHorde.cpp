/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 00:12:21 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 00:12:23 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

ZombieHorde::ZombieHorde (int N){
	std::cout << "\033[1;34m__________________________________" << std::endl;
	std::cout << "\033[0;32m Aren't you scared of zombies???" << std::endl;
	std::cout << "\033[1;34m__________________________________\033[0m" << std::endl;
	this->number = N;
	this->all_zombies = new Zombie[N];
}

void	ZombieHorde::announce ( void ){
	int i = 0;

	while(i < this->number)
	{
		this->all_zombies[i].announce();
		i++;
	}
}

ZombieHorde::~ZombieHorde ( void ){
	std::cout << "\033[1;34m__________________________________" << std::endl;
	std::cout << "     ALL ZOMBIES\033[0;32m DEFEATED\033[1;34m!!!" << std::endl;
	std::cout << "__________________________________" << std::endl;
	delete [] this->all_zombies;
}
