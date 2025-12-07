/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 18:47:11 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/06 19:41:51 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public: // Constructors & Destructors
	Point(void);
	Point(const Fixed &x, const Fixed &y);
	Point(const Point &other);
	~Point(void);
public: // Operators
	Point	&operator=(const Point &other);
	Fixed const &getX(void) const;
	Fixed const &getY(void) const;
};

#endif
