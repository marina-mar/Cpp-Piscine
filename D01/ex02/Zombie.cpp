/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:35:16 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/14 21:35:17 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <iomanip>
#include "Zombie.hpp"

Zombie::Zombie (std::string name, std::string type)
{
	std::cout << "\033[1;34m`-._,-'_`-. dark nebulous night" << std::endl;
	std::cout << "there comes \033[0;32m" << name << "\033[1;34m, the \033[0;32m" << type << "\033[1;34m Z O M B I E" << std::endl;
	this->name = name;
	this->type = type;
}

void Zombie::announce() {
	std::cout << "___________________________________________" << std::endl;
	std::cout << "GROWARRRRRRRRRR! I AM THE \033[0;32m" << this->type << "\033[1;34m Z O M B I E, \033[0;32m" << this->name << std::endl;
	std::cout << "                           \\" << std::endl;
	std::cout << "\033[0;32m                                .....            " << std::endl;
	std::cout << "                               C C  /            " << std::endl;
	std::cout << "                              /<   /             " << std::endl;
	std::cout << "               ___ __________/_#__/             " << std::endl;
	std::cout << "              /(- /(\\_\\________   \\              " << std::endl;
	std::cout << "              \\ ) \\ )_      \\o     \\             " << std::endl;
	std::cout << "              /|\\ /|\\       |'     |             " << std::endl;
	std::cout << "                            |     _|             " << std::endl;
	std::cout << "                            /o   __\\             " << std::endl;
	std::cout << "                           / '     |             " << std::endl;
	std::cout << "                          / /      |             " << std::endl;
	std::cout << "                         /_/\\______|             " << std::endl;
	std::cout << "                        (   _(    <              " << std::endl;
	std::cout << "                         \\    \\    \\             " << std::endl;
	std::cout << "                          \\    \\    |            " << std::endl;
	std::cout << "                           \\____\\____\\           " << std::endl;
	std::cout << "                           ____\\_\\__\\_\\          " << std::endl;
	std::cout << "                         /`   /`     o\\          " << std::endl;
	std::cout << "                         |___ |_______|" << std::endl;
	std::cout << "\033[1;34m___________________________________________" << std::endl;
}

Zombie::~Zombie (void){
	std::cout << "OH NO! The sun light is out and the z o m b i e \033[0;32m" << this->name << "\033[1;34m is in the ground!! `-._,-'_`-." << std::endl;
}