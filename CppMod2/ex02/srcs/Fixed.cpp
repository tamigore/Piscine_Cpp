/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:08:52 by user42            #+#    #+#             */
/*   Updated: 2022/03/15 12:37:23 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructor & destructor

Fixed::Fixed( void )
{
	//std::cout << "Constructor called" << std::endl;
	this->_val = 0;
}

Fixed::~Fixed( void )
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &nb)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = nb;
}

Fixed	&Fixed::operator=(const Fixed &nb)
{
//	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &nb)
		this->_val = nb.getRawBits();
	return (*this);
}

Fixed::Fixed(const int nb)
{
//	std::cout << "Int constructor called" << std::endl;
	this->_val = nb << this->_mantis;
}

Fixed::Fixed(const float nb)
{
//	std::cout << "Float constructor called" << std::endl;
	this->_val = roundf(nb * (1 << this->_mantis));
}

// function

int		Fixed::getRawBits( void ) const
{
//	std::cout << "Fonction getRawBits called" << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits( int const raw )
{
	this->_val = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_val) / (1 << this->_mantis));
}

int		Fixed::toInt(void) const
{
	return ((int)(this->_val >> this->_mantis));
}

//	operator

std::ostream& operator<<(std::ostream &output, const Fixed &data)
{
	std::ostream *test = &output;
	
	if (test)
		output << data.toFloat();
	return output;
}

// class operator

bool	Fixed::operator<( const Fixed &nb ) const
{
	return (this->getRawBits() < nb.getRawBits());
}

bool	Fixed::operator>( const Fixed &nb ) const
{
	return (this->getRawBits() > nb.getRawBits());
}

bool	Fixed::operator<=( const Fixed &nb ) const
{
	return (this->getRawBits() <= nb.getRawBits());
}

bool	Fixed::operator>=( const Fixed &nb ) const
{
	return (this->getRawBits() >= nb.getRawBits());
}

bool	Fixed::operator==( const Fixed &nb ) const
{
	return (this->getRawBits() == nb.getRawBits());
}

bool	Fixed::operator!=( const Fixed &nb ) const
{
	return (this->getRawBits() != nb.getRawBits());
}

// OPERATOR (+ - * /)

Fixed	Fixed::operator+( const Fixed &nb ) const
{
	Fixed	obj;

	obj.setRawBits(this->_val + nb.getRawBits());
	return (obj);
}

Fixed	Fixed::operator-( const Fixed &nb ) const
{
	Fixed	obj;

	obj.setRawBits(this->_val - nb.getRawBits());
	return (obj);
}

Fixed	Fixed::operator*( const Fixed &nb ) const
{
	Fixed	obj;

	obj.setRawBits((this->_val * nb.getRawBits()) >> this->_mantis);
	return (obj);
}

Fixed	Fixed::operator/( const Fixed &nb ) const
{
	Fixed	obj;

	obj.setRawBits((this->_val << this->_mantis) / nb.getRawBits());
	return (obj);
}

// OPERATOR (iterator)

Fixed &Fixed::operator++(void)
{
    this->_val++;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->_val--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    operator++();
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    operator--();
    return (tmp);
}

// OPERATOR (a < > b)

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}