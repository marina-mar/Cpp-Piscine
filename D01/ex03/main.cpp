/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:35:55 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/14 21:35:56 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

int main ( void ){
	ZombieHorde all_zombies = ZombieHorde(4);
	all_zombies.announce();
}
