/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:27:33 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/09 17:16:24 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie spawn" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": is dead" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getName( void )
{
	return (this->_name);
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie*	newZombie( std::string name )
{
	Zombie	*first = new Zombie();

	first->setName(name);
	return (first);
}
