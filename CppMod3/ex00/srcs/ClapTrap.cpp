/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:02:04 by user42            #+#    #+#             */
/*   Updated: 2022/03/14 20:39:44 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_Name = "ClapTrap";
	this->_Maxhp = 10;
	this->_Hp = 10;
	this->_Ep = 10;
	this->_Dp = 0;
}

ClapTrap::ClapTrap(const ClapTrap &data)
{
	*this = data;
}

ClapTrap::ClapTrap(const std::string name)
{
	this->_Name = name;
	this->_Maxhp = 10;
	this->_Hp = 10;
	this->_Ep = 10;
	this->_Dp = 0;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_Name << " is destroy." << std::endl;
}


void	ClapTrap::attack(const std::string &target) const
{
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Dp << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hp == 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is already dead..." << std::endl;
	}
	else
	{
		if ((int)(this->_Hp - amount) >= 0)
			this->_Hp -= amount;
		else
			this->_Hp = 0;
		std::cout << "ClapTrap " << this->_Name << " takes " << amount << " damage and is now at " << this->_Hp << " health points!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Hp == this->_Maxhp)
	{
		std::cout << "ClapTrap " << this->_Name << " is already full of health!" << std::endl;
	}
	else if (this->_Hp == 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is already dead..." << std::endl;
	}
	else
	{
		if ((int)(this->_Hp + amount) > this->_Maxhp)
			this->_Hp = this->_Maxhp;
		else
			this->_Hp = this->_Hp + amount;
		std::cout << "ClapTrap " << this->_Name << " repaire and is now at " << this->_Hp << " health points!" << std::endl;
	}
}

std::string	ClapTrap::getName(void) const
{
	return(this->_Name);
}

int	ClapTrap::getData(const char c) const
{
	if (c == 'H')
		return (this->_Hp);
	else if (c == 'E')
		return (this->_Ep);
	else if (c == 'D')
		return (this->_Dp);
	return (0);
}
