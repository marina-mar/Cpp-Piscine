/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 00:44:00 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 00:44:01 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Human {
 private:
	const Brain _human_brain;

 public:
	Human( void );
	~Human( void );
	std::string identify( void );
	const Brain &getBrain( void );
	//getBrain returns a reference to a const Brain, what allows us to use the "." syntax in the main
};

#endif
