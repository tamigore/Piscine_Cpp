/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:17:36 by user42            #+#    #+#             */
/*   Updated: 2022/03/15 18:49:42 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed	a;
	Fixed	const b(Fixed(5.05f) * Fixed(2));
	Fixed	const c(Fixed(5.05f) / Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << c << std::endl;
	std::cout << Fixed::min(a, c) << std::endl;
	std::cout << Fixed::max(a, c) << std::endl;
	a = a + b;
	Fixed	const d(Fixed(5) - Fixed(2));
	std::cout << a << std::endl;
	std::cout << d << std::endl;
	return 0;
}