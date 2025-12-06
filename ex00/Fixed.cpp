/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:28:49 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/05 13:52:43 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called!" << std::endl;
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
