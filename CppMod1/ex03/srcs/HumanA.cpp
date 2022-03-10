/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:43:53 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/10 20:21:39 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &w)
{
    this->_w = &w;
    this->_name = name;
}

HumanA::~HumanA(void)
{
  //  std::cout << "HumanA dead" << std::endl;
}

void	HumanA::attack( void )
{
    std::cout << this->_name << " attacks with their " << this->_w->getType() << std::endl;
}

void	HumanA::setWeapon( Weapon &w )
{
    this->_w = &w;
}
