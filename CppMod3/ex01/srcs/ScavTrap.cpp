/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:36:37 by user42            #+#    #+#             */
/*   Updated: 2022/03/15 11:16:01 by tamigore         ###   ########.fr       */
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
	std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_Dp << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_Hp == 0)
	{
		std::cout << "ScavTrap " << this->_Name << " is already dead..." << std::endl;
	}
	else
	{
		if ((int)(this->_Hp - amount) >= 0)
			this->_Hp -= amount;
		else
			this->_Hp = 0;
		std::cout << "ScavTrap " << this->_Name << " takes " << amount << " damage and is now at " << this->_Hp << " health points!" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_Hp == this->_Maxhp)
	{
		std::cout << "ScavTrap " << this->_Name << " is already full of health!" << std::endl;
	}
	else if (this->_Hp == 0)
	{
		std::cout << "ScavTrap " << this->_Name << " is already dead..." << std::endl;
	}
	else
	{
		if ((int)(this->_Hp + amount) > this->_Maxhp)
			this->_Hp = this->_Maxhp;
		else
			this->_Hp = this->_Hp + amount;
		std::cout << "ScavTrap " << this->_Name << " repaire and is now at " << this->_Hp << " health points!" << std::endl;
	}
}