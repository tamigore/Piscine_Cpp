/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:02:25 by user42            #+#    #+#             */
/*   Updated: 2022/03/20 15:58:23 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	fonc(T i)
{
	std::cout << i;
}

void	fonc2(int i)
{
	std::cout << i / 2 << std::endl;
}

int main()
{
	int			*a = new int[50];
	std::string	str = "coucou tout le monde !";

	for (int i = 0; i < 50; i++)
		a[i] = i * 2;
	::iter(a, 50, fonc2);
	::iter(str.c_str(), str.size(), fonc);
	std::cout << std::endl;
	::iter(a, 50, fonc);
	std::cout << std::endl;
	return (0);
}