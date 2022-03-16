/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:02:25 by user42            #+#    #+#             */
/*   Updated: 2022/03/16 15:46:20 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		int i = 0;
		Animal* meta[10];
		while (i < 5)
			meta[i++] = new Cat("Chaton");
		while (i < 10)
			meta[i++] = new Dog("Toutou");
		i = 0;
		while (i < 10)
			meta[i++]->makeSound();
		i = 0;
		while (i < 10)
			delete meta[i++];
	}
	return (0);
}