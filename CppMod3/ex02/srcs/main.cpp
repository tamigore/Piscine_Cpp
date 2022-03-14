/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:02:25 by user42            #+#    #+#             */
/*   Updated: 2022/03/14 12:41:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap first("Toto");
	FragTrap second("Babar");

	first.attack(second.getName());
	second.takeDamage(first.getData('D'));
	second.beRepaired(second.getData('E'));
	second.attack(first.getName());
	first.takeDamage(second.getData('D'));
	first.beRepaired(first.getData('E'));
	std::cout << "The sun falls on the world..." << std::endl;
	std::cout << "ScavTrap enter Gate Keeper mode:" << std::endl;
	first.highFivesGuys();
	second.highFivesGuys();
	first.takeDamage(100);
	second.takeDamage(100);
	return (0);
}