/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 16:11:29 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/16 16:11:30 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

using namespace std;
#define print(x)  cout << x << endl;

int const Fixed::_fraction = 8;

Fixed::Fixed()
{
	print("Default constructor called, fixed point set to 0");
	_integer = 0;
}

Fixed::Fixed(Fixed const &src)
{
	print("Copy constructor called");
	*this = src;
};

int 	Fixed::getRawBits ( void ) const {
	print("getRawBits called!");
	return this->_integer;
}

void	Fixed::setRawBits ( int const raw )
{
	this->_integer = raw;
	print("setRawBits called!");
}
Fixed 	&Fixed::operator =(const Fixed &assign)
{
	print("Assignation operator called");
	_integer = assign.getRawBits();

	return *this;
}

Fixed::~Fixed( void ) {
	print("Destructor called!!");
}
