/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 16:11:18 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/16 16:11:20 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

//A fixed-point number is a representation of a real number
//using a certain number of bits of a type for the integer part,
//and the remaining bits of the type for the fractional part.
//The number of bits representing each part is fixed (hence the name, fixed-point).
//An integer type is usually used to store fixed-point values.

class Fixed {
public:
	Fixed();
	Fixed(Fixed const &src);
	Fixed(const int convert);
	Fixed(const float convert);
	~Fixed(void);

	float toFloat( void ) const;
	int toInt( void ) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed &operator=(Fixed const &base);

private:
	int _integer;
	static const int _fraction;
};

std::ostream &operator<<(std::ostream& stream, Fixed const &object);

#endif
