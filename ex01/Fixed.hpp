/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:28:51 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/05 14:30:56 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	_fractionalBits = 8;
public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &other);
	~Fixed(void);
	Fixed	&operator=(const Fixed &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &f);

#endif
