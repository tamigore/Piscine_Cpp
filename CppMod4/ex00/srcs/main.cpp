/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:02:25 by user42            #+#    #+#             */
/*   Updated: 2022/03/15 11:22:15 by tamigore         ###   ########.fr       */
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
	std::cout << "FragTrap search for a friend:" << std::endl;
	first.highFivesGuys();
	second.highFivesGuys();
	first.takeDamage(100);
	second.takeDamage(100);
	return (0);
}