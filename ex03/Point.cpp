/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 18:47:04 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/06 19:42:50 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{}

Point::Point(const Fixed &x, const Fixed &y) : _x(x), _y(y)
{}

Point::Point(const Point &other) : _x(other._x), _y(other._y)
{}

Point::~Point(void)
{}

Point	&Point::operator=(const Point &other)
{
	(void) other;
	return (*this);
}

Fixed const	&Point::getX(void) const
{
	return (_x);
}

Fixed const	&Point::getY(void) const
{
	return (_y);
};
