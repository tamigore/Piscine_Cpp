/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:28:31 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/14 20:43:57 by tamigore         ###   ########.fr       */
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
	first.beRepaired(first.getData('E'));
	third.beRepaired(100);
	second.beRepaired(1);
	return (0);
}