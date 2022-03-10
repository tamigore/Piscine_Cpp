/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:43:53 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/10 20:11:58 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void	HumanB::attack( void )
{
    std::cout << this->_name << " attacks with their " << this->_w->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &w )
{
    this->_w = &w;
}

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

HumanB::~HumanB(void)
{
//   std::cout << "HumanA dead" << std::endl;
}
