/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:36:37 by user42            #+#    #+#             */
/*   Updated: 2022/03/16 15:36:09 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat " << this->_type << " is built by default." << std::endl;
}

Cat::Cat(std::string type)
{
	this->_type = type;
	std::cout << "Cat " << this->_type << " is built." << std::endl;
}

Cat::Cat(const Cat &data)
{
	this->_type = data.getType();
	std::cout << "Cat " << this->_type << " is built by copy." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << this->_type << " is destroy." << std::endl;
}

Cat	&Cat::operator=(const Cat &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou..." << std::endl;
}