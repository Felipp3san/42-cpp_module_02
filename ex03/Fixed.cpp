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
{};

Fixed::Fixed(const int value)
{
	_value = value << _fractionalBits;
};

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _fractionalBits));
};

Fixed::Fixed(const Fixed &other) : _value(other._value)
{};

Fixed::~Fixed(void)
{};

Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		_value = other._value;
	return (*this);
};

bool	Fixed::operator>(const Fixed &other) const
{
	return (_value > other._value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (_value < other._value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (_value >= other._value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (_value <= other._value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (_value == other._value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (_value != other._value);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	ret;

	ret.setRawBits(_value + other._value);
	return (ret);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	ret;

	ret.setRawBits(_value - other._value);
	return (ret);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	ret;

	ret.setRawBits((_value * other._value) >> _fractionalBits);
	return (ret);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed	ret;

	ret.setRawBits((_value * (1 << _fractionalBits)) / other._value);
	return (ret);
}

Fixed	&Fixed::operator++(void)
{
	_value += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old;

	old = *this;
	++(*this);
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	_value -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old;

	old = *this;
	--(*this);
	return (old);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &f)
{
	stream << f.toFloat();
	return (stream);
}

int		Fixed::getRawBits(void) const
{
	return (_value);
};

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int	Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return ((float) _value / (1 << _fractionalBits));
}

Fixed	&Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

Fixed const	&Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

Fixed const	&Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}

Fixed	&Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}
