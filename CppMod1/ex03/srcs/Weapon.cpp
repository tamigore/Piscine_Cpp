/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:27:33 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/09 17:43:46 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon optain" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << this->_name << ": weapon gone" << std::endl;
}

std::string	Weapon::getName( void )
{
	return (this->_name);
}

void	Weapon::setName(std::string name)
{
	this->_name = name;
}