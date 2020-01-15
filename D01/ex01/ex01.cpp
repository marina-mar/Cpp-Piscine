/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:32:57 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/14 21:33:16 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

void memoryLeak()
{
std::string* panthere = new std::string("String panthere");
std::cout << *panthere << std::endl;

delete panthere;
}
