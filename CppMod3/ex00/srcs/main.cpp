/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:28:31 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/16 20:18:44 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	first("Tad");
	ClapTrap	second;
	ClapTrap	third = first;

	second.attack("Tad");
	first.takeDamage(second.getData('D'));
	third.takeDamage(second.getData('D'));
	first.beRepaired(1);
	third.beRepaired(100);
	second.beRepaired(1);
	while (first.getData('E') > 0)
		first.attack("caca");
	first.attack("caca");
	first.beRepaired(1);
	first.takeDamage(100);
	first.attack("caca");
	first.beRepaired(1);
	first.takeDamage(100);
	return (0);
}