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
#include <cmath>

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
}

Fixed::Fixed(int const convert)
{
	print("Int constructor called");
	setRawBits(convert << this->_fraction);
	//shifts the bits of the integer to the integer part of it (8 in the fixed case, 2^8)
}

Fixed::Fixed(const float convert)
{
	print("Float constant called");
	setRawBits(roundf(convert * (1 << this->_fraction)));
	//how to convert a float value to a fixed point value
	//1. Multiply the float by 2^(number of fractional bits for the type), eg. 2^8 for 24.8
	//2 . Round the result (just add 0.5) if necessary, and floor it (or cast to an integer type) leaving an integer value.
}

//both those toType functions do the same process as the creation ones, but inverting:::
int 	Fixed::toInt (void) const
{
	return (getRawBits() >> this->_fraction);
}

float 	Fixed::toFloat( void ) const
{
	return ((float)getRawBits() / (1 << this->_fraction));
}

int 	Fixed::getRawBits ( void ) const {
	return this->_integer;
}

void	Fixed::setRawBits ( int const raw )
{
	this->_integer = raw;
}
Fixed 	&Fixed::operator =(const Fixed &assign)
{
	print("Assignation operator called");
	_integer = assign.getRawBits();

	return *this;
}

std::ostream	&operator<<(std::ostream& stream, Fixed const &object)
{
	stream << object.toFloat();
	return (stream);
}
Fixed::~Fixed( void ) {
	print("Destructor called!!");
}
