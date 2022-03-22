/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:02:04 by user42            #+#    #+#             */
/*   Updated: 2022/03/22 12:59:57 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Animal is built by default." << std::endl;
}

Animal::Animal(const Animal &data)
{
	this->_type = data.getType();
	std::cout << "Animal " << this->_type << " is built by copy." << std::endl;
}

Animal::Animal(const std::string type)
{
	this->_type = type;
	std::cout << "Animal " << this->_type << " is built." << std::endl;
}

Animal	&Animal::operator=(const Animal &data)
{
	this->_type = data.getType();
	std::cout << "Animal " << this->_type << " is built." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal " << this->_type << " is destroy." << std::endl;
}

std::string	Animal::getType(void) const
{
	return(this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Grrrrrrrrrrrrrrr" << std::endl;
}

std::string	Animal::getIdea(int n) const
{
	(void)n;
	std::cout << "Not every Animal has a brain" << std::endl;
	return ("");
}

void		Animal::setIdea(int n, std::string mem) const
{
	(void)n;
	(void)mem;
	std::cout << "Not every Animal has a brain" << std::endl;
}