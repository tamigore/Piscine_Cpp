/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:53:06 by user42            #+#    #+#             */
/*   Updated: 2022/03/13 20:39:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>
#include <cmath>

class	Fixed
{
private:

	int					_val;
	static const int	_mantis = 8;

public:

	Fixed( void );
	~Fixed();
	Fixed( const Fixed &nb );
	Fixed( const int nb );
	Fixed( const float nb );
	Fixed	&operator=( const Fixed &nb );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream	&operator<<( std::ostream &output, const Fixed& data);

#endif