/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 19:44:20 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/14 19:44:21 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <cstring>
#include <iomanip>

Pony::Pony(std::string name, std::string food){
	std::cout << "\033[0;33m_________________________________" << std::endl;
	std::cout << "\033[1;35mCongrats! Now you have a new pony, " << name << "!" << std::endl;
	std::cout << "His favorite food is " << food << "**\033[0;33m" << std::endl;
	std::cout << "           ,--," << std::endl;
	std::cout << "     _ ___/ /\\|" << std::endl;
	std::cout << " ,;'( )__, )  ~" << std::endl;
	std::cout << "//  //   '--; " << std::endl;
	std::cout << "'   \\     | ^" << std::endl;
	std::cout << "     ^    ^"	<< std::endl;
	std::cout << "\033[1;35m________________" << std::endl;
	this->name = name;
	this->favorite_food = food;
}

void Pony::pony_runs( void ){
	std::cout << "\033[1;35m WOW!!" << this->name << " is fast!! ~~~**\033[0;33m" << std::endl;
	std::cout << "            .''" << std::endl;
	std::cout << "  ._.-.___.' (`\\" << std::endl;
	std::cout << " //(        ( `'" << std::endl;
	std::cout << "'/ )\\ ).__. ) " << std::endl;
	std::cout << "' <' `\\ ._/'\\" << std::endl;
	std::cout << "   `   \\     \\" << std::endl;
	std::cout << "\033[1;35m________________" << std::endl;
}

void Pony::pony_eats( void ){
	std::cout << "\033[1;35mYEAS! " << this->name << " loves to eat " << this->favorite_food <<  "! .~._\033[0;33m" << std::endl;
	std::cout << "       _ ____" << std::endl;
	std::cout << "     /( ) _   \\" << std::endl;
	std::cout << "    / //   /\\` \\,  ||--||--||-" << std::endl;
	std::cout << "      \\|   |/  \\|  ||--||--||-" << std::endl;
	std::cout << "~^~^~^~~^~~~^~~^^~^^^^^^^^^^^^" << std::endl;
	std::cout << "\033[1;35m________________________________" << std::endl;
}

Pony::~Pony( void ){
	std::cout << "\033[1;35m ...no more pony..." << this->name << " left you..." << std::endl;
}