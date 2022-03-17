/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:02:25 by user42            #+#    #+#             */
/*   Updated: 2022/03/17 10:29:23 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap first("Toto");
	ScavTrap second("Babar");

	first.attack(second.getName());
	second.takeDamage(first.getData('D'));
	second.beRepaired(30);
	second.attack(first.getName());
	first.takeDamage(second.getData('D'));
	first.beRepaired(10);
	while (first.getData('E') > 0)
		first.attack("caca");
	first.attack("caca");
	std::cout << "The sun falls on the world..." << std::endl;
	std::cout << "ScavTrap enter Gate Keeper mode:" << std::endl;
	first.guardGate();
	second.guardGate();
	first.takeDamage(100);
	second.takeDamage(100);
	return (0);
}