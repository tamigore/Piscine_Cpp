/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:36:37 by user42            #+#    #+#             */
/*   Updated: 2022/03/22 12:19:28 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog " << this->_type << " is built by default." << std::endl;
}

Dog::Dog(std::string type)
{
	this->_type = type;
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
	this->_type = data.getType();
	std::cout << "Dog " << this->_type << " is built by copy." << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "OUAF!" << std::endl;
}