/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:43:53 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/09 17:16:31 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "You need 1 or more Zombie to make a horde...\n";
		return (NULL);
	}
	
	int		i = 0;
	Zombie	*horde;

	horde = new Zombie[N];
	while (i < N)
		horde[i++].setName(name);
	return (horde);
}
