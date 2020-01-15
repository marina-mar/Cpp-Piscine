/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:35:47 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/14 21:35:48 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <string>

class ZombieEvent {
public:
	std::string name;
	std::string type;


	ZombieEvent( void );
	~ZombieEvent( void );
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	void randomChump( void );

};

#endif
