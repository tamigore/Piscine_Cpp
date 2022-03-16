/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:02:25 by user42            #+#    #+#             */
/*   Updated: 2022/03/16 15:36:57 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		Dog		dog("Toto");
		Cat 	cat("Babar");
		Dog		dog2 = dog;
		Cat 	cat2(cat);
		Animal	ani;
		dog.makeSound();
		cat.makeSound();
		ani.makeSound();
		dog2.makeSound();
		cat2.makeSound();
	}
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		j->makeSound(); //will output the dog sound
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound
		meta->makeSound(); //will output the animal sound!
		delete meta;
		delete j;
		delete i;
	}
	return (0);
}