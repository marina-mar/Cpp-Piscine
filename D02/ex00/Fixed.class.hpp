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

class Fixed {
public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed(void);
	Fixed &operator=(Fixed const &base);
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _integer;
	static const int _fraction;
};

#endif
