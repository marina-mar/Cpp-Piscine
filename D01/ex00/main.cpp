/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 19:44:43 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/14 19:44:45 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Pony.hpp"

void	ponyOnTheStack( void ){
	std::string name = "Crucru";
	std::string food = "sugar cubes";
	Pony new_pony = Pony(name, food);

	new_pony.pony_runs();
	new_pony.pony_eats();
}

void	ponyOnTheHeap ( void ){
	std::string name = "Douglas";
	std::string food = "carrots";
	Pony *new_pony = new Pony("Douglas", "carrots");

	new_pony->pony_runs();
	new_pony->pony_eats();
	delete new_pony;
}

int main ( void ){
	ponyOnTheHeap();
	std::cout << "\033[1;33mNo more pony in the heap =(" << std::endl;
	ponyOnTheStack();
	std::cout << "\033[1;33mNo more pony in the stack =(" << std::endl;
}