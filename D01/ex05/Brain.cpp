/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 00:43:14 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 00:43:32 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

Brain::Brain( void )
{
	std::cout << "\033[38;5;109m____________________________________________" << std::endl;
	std::cout << "          Welcome to the B R A I N" << std::endl;
	std::cout << "____________________________________________" << std::endl;
	std::cout << "\033[38;5;216m                    " << "      _---~~(~~-_." << std::endl;
	std::cout << "                    "  << "    _{        )   )" << std::endl;
	std::cout << "                    "  << "  ,   ) -~~- ( ,-' )_" << std::endl;
	std::cout << "                    "  << " (  `-,_..`., )-- '_,)" << std::endl;
	std::cout << "                    "  << "( ` _)  (  -~( -_ `,  }" << std::endl;
	std::cout << "                    "  << "(_-  _  ~_-~~~~`,  ,' )" << std::endl;
	std::cout << "                    "  << "  `~ -^(    __;-,((()))" << std::endl;
	std::cout << "                    "  << "        ~~~~ {_ -_(())" << std::endl;
	std::cout << "                    "  << "               `\\  }" << std::endl;
	std::cout << "                    "  << "                 { }" <<std::endl;
}

std::string Brain::identify() const{
	std::stringstream convert;

	convert << this;
	std::cout << "  ";
	return (convert.str());
}

Brain::~Brain( void )
{
	std::cout << "\033[38;5;109m____________________________________________" << std::endl;
	std::cout << "  the zombies got the brain, no more brain" << std::endl;
	std::cout << "____________________________________________" << std::endl;
}