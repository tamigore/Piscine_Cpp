/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:36:37 by user42            #+#    #+#             */
/*   Updated: 2022/03/20 16:02:14 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_Name = "Scav";
	this->_Maxhp = 100;
	this->_Dp = 20;
	this->_Hp = 100;
	this->_Ep = 50;
	std::cout << "ScavTrap " << this->_Name << " is built." << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->_Name = name;
	this->_Maxhp = 100;
	this->_Dp = 20;
	this->_Hp = 100;
	this->_Ep = 50;
	std::cout << "ScavTrap " << this->_Name << " is built." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &data)
{
	this->_Name = data.getName();
	this->_Maxhp = data.getData('H');
	this->_Dp = data.getData('D');
	this->_Hp = data.getData('H');
	this->_Ep = data.getData('E');
	std::cout << "ScavTrap " << this->_Name << " is built by copy." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_Name << " is destroy." << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << this->_Name << " enter Gate keeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_Hp <= 0)
		std::cout << "ScavTrap " << this->_Name << " is already dead." << std::endl;
	else if (this->_Ep <= 0)
		std::cout << "ScavTrap " << this->_Name << " don't have the energy to attack." << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_Dp << " points of damage!" << std::endl;
		this->_Ep -= 1;
	}
}