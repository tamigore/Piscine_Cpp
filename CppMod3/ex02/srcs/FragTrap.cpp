/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:36:37 by user42            #+#    #+#             */
/*   Updated: 2022/03/20 16:02:23 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_Name = "Frag";
	this->_Maxhp = 100;
	this->_Dp = 30;
	this->_Hp = 100;
	this->_Ep = 100;
	std::cout << "FragTrap " << this->_Name << " is built by default." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_Name = name;
	this->_Maxhp = 100;
	this->_Dp = 30;
	this->_Hp = 100;
	this->_Ep = 100;
	std::cout << "FragTrap " << this->_Name << " is built." << std::endl;
}

FragTrap::FragTrap(const FragTrap &data)
{
	this->_Name = data.getName();
	this->_Maxhp = data.getData('H');
	this->_Dp = data.getData('D');
	this->_Hp = data.getData('H');
	this->_Ep = data.getData('E');
	std::cout << "FragTrap " << this->_Name << " is built by copy." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_Name << " is destroy." << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << this->_Name << " ask for a High Five !!!" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_Hp <= 0)
		std::cout << "FragTrap " << this->_Name << " is already dead." << std::endl;
	else if (this->_Ep <= 0)
		std::cout << "FragTrap " << this->_Name << " don't have the energy to attack." << std::endl;
	else
	{
		std::cout << "FragTrap " << this->_Name << " attacks " << target << ", causing " << this->_Dp << " points of damage!" << std::endl;
		this->_Ep -= 1;
	}
}