/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:53:06 by user42            #+#    #+#             */
/*   Updated: 2022/03/13 20:40:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>

class	Fixed
{
	private:

	int					_val;
	static const int	_mantis = 8;

	public:
	
	Fixed( void );
	~Fixed();
	Fixed( const Fixed &nb );
	Fixed	&operator=( const Fixed &nb );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif