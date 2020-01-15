/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 19:44:32 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/14 19:44:33 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
#include <string>

class Pony {
	public:
		Pony(std::string name, std::string food);
		~Pony( void );
		void pony_runs( void );
		void pony_eats( void );

		std::string name;
		std::string favorite_food;
};

#endif
