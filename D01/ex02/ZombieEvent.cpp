/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:35:37 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/14 21:35:38 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

ZombieEvent::ZombieEvent ( void ){
	std::cout << "\033[1;34m__________________________________" << std::endl;
	std::cout << "\033[0;32m       z o m b i e E v e n t" << std::endl;
	std::cout << "\033[1;34m__________________________________\033[0m" << std::endl;
	this->type = "";
	this->name = "";
}

void	ZombieEvent::setZombieType (std::string type){
	this->type = type;
	std::cout << "\033[0;32m__________________________________" << std::endl;
	std::cout << "    type just got set to " << type << std::endl;
	std::cout << "__________________________________\033[0m" << std::endl;
}

Zombie	*ZombieEvent::newZombie (std::string name){
	if (this->type != "")
	{
		Zombie *new_zombie = new Zombie(name, this->type);
		this->name = name;
		return (new_zombie);
	}
	else
	{
		std::cout << "GROWARRR... your zombie doesn't have a type!!";
		return NULL;
	}
}

std::string get_random_name ( void ){
	std::string names[10] =  {"Patricia", "Alfredo", "Henrique", "Ana", "Joanito", "Guilhermina", "Tamara", "José", "Fernando", "Maria"};
	int nbr = rand() % 10;
	std::string random = names[nbr];
	std::string convert = random;
	return convert;
}

void	ZombieEvent::randomChump ( void ){
	std::string name = get_random_name();
	if (this->type != "")
	{
		Zombie new_zombie = Zombie(name, this->type);
		new_zombie.announce();
	}
	else
		std::cout << "GROWARRR... your zombie doesn't have a type!!";
}

ZombieEvent::~ZombieEvent ( void ){
	std::cout << "\033[1;34m__________________________________" << std::endl;
	std::cout << "   z o m b i e E v e n t \033[0;32mOVER\033[1;34m" << std::endl;
	std::cout << "__________________________________" << std::endl;
}