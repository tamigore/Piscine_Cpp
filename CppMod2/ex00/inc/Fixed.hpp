/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:53:06 by user42            #+#    #+#             */
/*   Updated: 2022/03/15 12:29:58 by tamigore         ###   ########.fr       */
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
	
	Fixed();
	~Fixed();
	Fixed( const Fixed &nb );
	Fixed	&operator=( const Fixed &nb );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif