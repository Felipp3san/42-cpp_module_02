/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:28:49 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/05 14:37:03 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called!" << std::endl;
};

Fixed::Fixed(const int value)
{
	_value = value << _fractionalBits;
	std::cout << "Int constructor called!" << std::endl;
};

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _fractionalBits));
	std::cout << "Float constructor called!" << std::endl;
};

Fixed::Fixed(const Fixed &other) : _value(other._value)
{
	std::cout << "Copy constructor called!" << std::endl;
};

Fixed::~Fixed(void)
{
	std::cout << "Destructor called!" << std::endl;
};

Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		_value = other._value;
	}
	std::cout << "Copy assignment operator called!" << std::endl;
	return (*this);
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &f)
{
	stream << f.toFloat();
	return (stream);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called!" << std::endl;
	return (_value);
};

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
	std::cout << "setRawBits member function called!" << std::endl;
}

int	Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return ((float) _value / (1 << _fractionalBits));
}
