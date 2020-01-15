/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 00:37:25 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 00:37:26 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

int main ( void ) {
	std::string brain = "HI THIS IS BRAIN";
	std::string& brain_ref = brain;
	std::string *brain_pointer = &brain;

	std::cout << brain_ref << std::endl;
	std::cout << *brain_pointer << std::endl;
	return (0);
}