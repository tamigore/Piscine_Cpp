/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:02:25 by user42            #+#    #+#             */
/*   Updated: 2022/03/20 12:53:55 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		int i = 0;
		Animal	*copy[10];
		Animal	*meta[10];
		while (i < 5)
			meta[i++] = new Cat("Chaton");
		while (i < 10)
			meta[i++] = new Dog("Toutou");
		std::cout << "Flat new:" << std::endl; 
		i = 0;
		while (i < 10)
			meta[i++]->makeSound();
		std::cout << "\nOperator copy:" << std::endl; 
		i = 0;
		while (i < 10)
		{
			copy[i] = meta[i];
			copy[i]->makeSound();
			i++;
		}
		std::cout << "\nFlat copy:" << std::endl; 
		i = 1;
		while (i < 10)
		{
			Animal	*ref(meta[i]);
			ref->makeSound();
			i++;
		}
		i = 0;
		while (i < 10)
			delete meta[i++];
	}
	return (0);
}