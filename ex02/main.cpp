/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:29:11 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/05 14:31:10 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed const a(10.5f);
	Fixed const	b(2);
	Fixed const	c(15);

	std::cout << "a from raw is " << a.getRawBits() << std::endl;
	std::cout << "b from raw is " << b.getRawBits() << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;
	//std::cout << "a is " << a << std::endl;
	//std::cout << "b is " << b << std::endl;
	//std::cout << "c is " << c << std::endl;
	//std::cout << "a > b " << (a > b) << std::endl;
	//std::cout << "a < b " << (a < b) << std::endl;
	//std::cout << "a >= b " << (a >= b) << std::endl;
	//std::cout << "a <= b " << (a <= b) << std::endl;
	//std::cout << "a == b " << (a == b) << std::endl;

	//std::cout << "c > b " << (c > b) << std::endl;
	//std::cout << "c < b " << (c < b) << std::endl;
	//std::cout << "c >= b " << (c >= b) << std::endl;
	//std::cout << "c <= b " << (c <= b) << std::endl;
	//std::cout << "c == b " << (c == b) << std::endl;

	//std::cout << "a + b = " << (a + b) << std::endl;
	//std::cout << "a - b = " << (a - b) << std::endl;
	//std::cout << "a * b = " << (a * 2) << std::endl;
	//std::cout << "a / b = " << (a / b) << std::endl;

	return (0);
}
