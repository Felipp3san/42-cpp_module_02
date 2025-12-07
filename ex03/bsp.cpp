/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 18:56:21 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/06 20:27:39 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
	AB = Vector from triangle vertex to another triangle vertex;
	AP = Vector from triangle vertex to point.

	Return:
		Cross product between AB and AP.
*/
Fixed	cross(Point const &a, Point const &b, Point const &p)
{
	Point const	AB(b.getX() - a.getX(), b.getY() - a.getY());
	Point const	AP(p.getX() - a.getX(), p.getY() - a.getY());

	return (AB.getX() * AP.getY()) - (AB.getY() * AP.getX());
};

/*
Params:
	a, b, c: The vertices of our beloved triangle.
	point: The point to check.
Return: 
	true if inside triangle, false if not.
	obs: if the point is in a vertex or an edge, return false.
*/
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed const	cp1 = cross(a, b, point);
	Fixed const	cp2 = cross(b, c, point);
	Fixed const	cp3 = cross(c, a, point);
	
	if (cp1 == 0 || cp2 == 0 || cp3 == 0)
		return (false);

	bool const	allNeg = (cp1 < 0 && cp2 < 0 && cp3 < 0);
	bool const	allPos = (cp1 > 0 && cp2 > 0 && cp3 > 0);
	return (allNeg || allPos);
}
