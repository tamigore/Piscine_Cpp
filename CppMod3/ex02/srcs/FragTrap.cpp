/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:36:37 by user42            #+#    #+#             */
/*   Updated: 2022/03/17 10:31:34 by tamigore         ###   ########.fr       */
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

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_Hp == 0)
		std::cout << "FragTrap " << this->_Name << " is already dead..." << std::endl;
	else
	{
		if ((int)(this->_Hp - amount) >= 0)
			this->_Hp -= amount;
		else
			this->_Hp = 0;
		std::cout << "FragTrap " << this->_Name << " takes " << amount << " damage and is now at " << this->_Hp << " health points!" << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_Hp == this->_Maxhp)
		std::cout << "FragTrap " << this->_Name << " is already full of health!" << std::endl;
	else if (this->_Hp == 0)
		std::cout << "FragTrap " << this->_Name << " is already dead..." << std::endl;
	else if (this->_Ep <= 0)
		std::cout << "FragTrap " << this->_Name << " don't have the energy to repair." << std::endl;
	else
	{
		if ((int)(this->_Hp + amount) > this->_Maxhp)
			this->_Hp = this->_Maxhp;
		else
			this->_Hp = this->_Hp + amount;
		std::cout << "FragTrap " << this->_Name << " repaire and is now at " << this->_Hp << " health points!" << std::endl;
	}
}