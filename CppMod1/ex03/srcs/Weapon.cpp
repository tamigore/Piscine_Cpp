/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:27:33 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/10 19:16:30 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
//	std::cout << "Weapon init without name" << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
//	std::cout << type << ": weapon obtain" << std::endl;
}

Weapon::~Weapon()
{
//	std::cout << this->_type << ": weapon gone" << std::endl;
}

std::string	Weapon::getType( void )
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}