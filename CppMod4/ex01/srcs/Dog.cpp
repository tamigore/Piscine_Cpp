/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:36:37 by user42            #+#    #+#             */
/*   Updated: 2022/03/15 18:27:20 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_br = new Brain;
	std::cout << "Dog " << this->_type << " is built by default." << std::endl;
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
	std::cout << "Dog " << this->_type << " is built by copy." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog " << this->_type << " is destroy." << std::endl;
}

Dog	&Dog::operator=(const Dog &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << this->_type << ": OUAF!" << std::endl;
}