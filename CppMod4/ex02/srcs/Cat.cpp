/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:36:37 by user42            #+#    #+#             */
/*   Updated: 2022/03/22 12:59:49 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_br = new Brain;
	std::cout << "Cat " << this->_type << " is built by default." << std::endl;
}

Cat::Cat(std::string name)
{
	this->_type = name;
	this->_br = new Brain;
	std::cout << "Cat is built." << std::endl;
}

Cat::Cat(const Cat &data)
{
	this->_type = data.getType();
	this->_br = new Brain(*data._br);
	std::cout << "Cat " << this->_type << " is built by copy." << std::endl;
}

Cat::~Cat()
{
	delete this->_br;
	std::cout << "Cat " << this->_type << " is destroy." << std::endl;
}

Cat	&Cat::operator=(const Cat &data)
{
	this->_type = data.getType();
	if (this->_br)
		delete this->_br;
	this->_br = new Brain(*data._br);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->_type << ": Miaou..." << std::endl;
}

std::string	Cat::getIdea(const int n) const
{
	if (n < 0 || n > 99)
		return ("");
	else
		return (this->_br->ideas[n]);
}

void		Cat::setIdea(int n, std::string mem)
{
	if (n >= 0 && n < 100)
		this->_br->ideas[n] = mem;
}