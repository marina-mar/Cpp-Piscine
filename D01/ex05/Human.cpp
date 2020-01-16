/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 00:43:50 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 00:43:51 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

Human::Human ( void ) {
	return ;
}

std::string Human::identify (){
	return _human_brain.identify();
}

const Brain &Human::getBrain(){
	return _human_brain;
}

Human::~Human ( void ) {
	return ;
}