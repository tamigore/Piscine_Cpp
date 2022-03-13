/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:02:04 by user42            #+#    #+#             */
/*   Updated: 2022/03/14 00:01:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_Hp = 10;
	this->_Ep = 10;
	this->_Dp = 0;
}

ClapTrap::~ClapTrap()
{
	
}


void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing "
		<< this->_Dp << " points of damage!" << std::endl;
}

void	takeDamage(unsigned int amount)
{

}

void	beRepaired(unsigned int amount)
{

}
