/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:53:06 by user42            #+#    #+#             */
/*   Updated: 2022/03/13 19:55:46 by user42           ###   ########.fr       */
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
// constructor
	Fixed( void );
	~Fixed();
	Fixed( const Fixed &nb );
	Fixed( const int nb );
	Fixed( const float nb );
	Fixed	&operator=( const Fixed &nb );

// comparaison
	bool	operator<( const Fixed &nb ) const;
	bool	operator>( const Fixed &nb ) const;
	bool	operator<=( const Fixed &nb ) const;
	bool	operator>=( const Fixed &nb ) const;
	bool	operator==( const Fixed &nb ) const;
	bool	operator!=( const Fixed &nb ) const;

// operation
	Fixed	operator+( const Fixed &nb ) const;
	Fixed	operator-( const Fixed &nb ) const;
	Fixed	operator*( const Fixed &nb ) const;
	Fixed	operator/( const Fixed &nb ) const;

// acces values
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

// increment and decrement
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

// compare values
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

};

std::ostream	&operator<<( std::ostream &output, const Fixed& data);

#endif