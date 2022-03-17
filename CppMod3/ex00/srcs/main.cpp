/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:28:31 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/17 10:26:38 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	first("Tad");
	ClapTrap	second;
	ClapTrap	third = first;

	second.attack("Tad");
	first.takeDamage(2);
	third.takeDamage(2);
	first.beRepaired(1);
	third.beRepaired(100);
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