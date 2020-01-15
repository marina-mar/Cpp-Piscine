/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 00:09:08 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 00:09:21 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <string>

class ZombieHorde {
public:
	Zombie	*all_zombies;
	int 	number;

	ZombieHorde( int N );
	~ZombieHorde( void );
	void announce( void );

};

#endif
