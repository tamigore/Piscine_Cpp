/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:36:37 by user42            #+#    #+#             */
/*   Updated: 2022/03/16 15:36:09 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat " << this->_type << " is built by default." << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	this->_type = type;
	std::cout << "WrongCat " << this->_type << " is built." << std::endl;
}

WrongCat::WrongCat(const WrongCat &data)
{
	this->_type = data.getType();
	std::cout << "WrongCat " << this->_type << " is built by copy." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << this->_type << " is destroy." << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaou..." << std::endl;
}
