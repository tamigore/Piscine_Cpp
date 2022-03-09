/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:27:08 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/09 17:22:13 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	str;
	Zombie		*z;
	int			i = 0;

	str = "Kiwi";
	z = zombieHorde(20, "Gogolito");
	while (i < 20)
		z[i++].announce();
	delete[] z;
	i = 0;
	z = zombieHorde(30, str);
	while (i < 30)
		z[i++].announce();
	delete[] z;
	return (0);
}