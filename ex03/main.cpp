/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:29:11 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/06 19:17:44 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

/*
	point A is inside the triangle (TRUE)
	point B is outside the triangle (FALSE)
	point C is in the edge (FALSE)
	point D is in a vertex (FALSE)
*/

bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point const triangle_a(2, 2);
	Point const triangle_b(8, 10);
	Point const triangle_c(14, 2);

	Point const point_a(8,4);
	Point const point_b(2,8);
	Point const point_c(8,2);
	Point const point_d(2,2);

	bool	ret = false;

	ret = bsp(triangle_a, triangle_b, triangle_c, point_a);
	std::cout << "Point A: " << ((ret == true)? "True" : "False") << std::endl;
	ret = bsp(triangle_a, triangle_b, triangle_c, point_b);
	std::cout << "Point B: " << ((ret == true)? "True" : "False") << std::endl;
	ret = bsp(triangle_a, triangle_b, triangle_c, point_c);
	std::cout << "Point C: " << ((ret == true)? "True" : "False") << std::endl;
	ret = bsp(triangle_a, triangle_b, triangle_c, point_d);
	std::cout << "Point D: " << ((ret == true)? "True" : "False") << std::endl;

	return (0);
}
