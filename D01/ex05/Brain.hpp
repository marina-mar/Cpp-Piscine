/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 00:44:28 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 00:44:29 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Brain {
public:
	int smartness;

	Brain(void);
	~Brain(void);
	std::string identify( void ) const;
};

#endif