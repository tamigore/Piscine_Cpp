/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:08:52 by user42            #+#    #+#             */
/*   Updated: 2022/03/13 20:41:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructor & destructor

Fixed::Fixed( void )
{
	std::cout << "Constructor called" << std::endl;
	this->_val = 0;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &nb)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = nb;
}

Fixed	&Fixed::operator=(const Fixed &nb)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &nb)
		this->_val = nb.getRawBits();
	return (*this);
}

// function

int		Fixed::getRawBits( void ) const
{
	std::cout << "Fonction getRawBits called" << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits( int const raw )
{
	this->_val = raw;
}