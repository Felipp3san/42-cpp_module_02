/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:28:51 by fde-alme          #+#    #+#             */
/*   Updated: 2025/12/05 13:37:59 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int	_value;
	static const int	_fractionalBits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &other);
	~Fixed(void);
	Fixed	&operator=(const Fixed &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
