/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:36:37 by user42            #+#    #+#             */
/*   Updated: 2022/03/22 12:59:45 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_br = new Brain;
	std::cout << "Dog is built by default." << std::endl;
}

Dog::Dog(std::string name)
{
	this->_type = name;
	this->_br = new Brain;
	std::cout << "Dog " << this->_type << " is built." << std::endl;
}

Dog::Dog(const Dog &data)
{
	this->_type = data.getType();
	this->_br = new Brain(*data._br);
	std::cout << "Dog " << this->_type << " is built by copy." << std::endl;
}

Dog::~Dog()
{
	delete this->_br;
	std::cout << "Dog " << this->_type << " is destroy." << std::endl;
}

Dog	&Dog::operator=(const Dog &data)
{
	this->_type = data.getType();
	if (this->_br)
		delete this->_br;
	this->_br = new Brain(*data._br);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << this->_type << ": OUAF!" << std::endl;
}

std::string	Dog::getIdea(const int n) const
{
	if (n < 0 || n > 99)
		return ("");
	else
		return (this->_br->ideas[n]);
}

void		Dog::setIdea(int n, std::string mem)
{
	if (n >= 0 && n < 100)
		this->_br->ideas[n] = mem;
}