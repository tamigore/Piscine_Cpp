/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:02:04 by user42            #+#    #+#             */
/*   Updated: 2022/03/15 16:59:20 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal is built by default." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &data)
{
	this->_type = data.getType();
	std::cout << "WrongAnimal " << this->_type << " is built by copy." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type)
{
	this->_type = type;
	std::cout << "WrongAnimal " << this->_type << " is built." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << this->_type << " is destroy." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return(this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Grrrrrrrrrrrrrrr" << std::endl;
}