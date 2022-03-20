/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:02:25 by user42            #+#    #+#             */
/*   Updated: 2022/03/20 12:41:12 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		Dog			dog("Toto");
		Cat 		cat("Babar");
		Dog			dog2 = dog;
		Cat 		cat2(cat);
		Animal		ani;
		WrongCat 	Wcat("WrongCat");
		WrongAnimal	Wani;

		std::cout << "Wrong :" << std::endl;
		Wcat.makeSound();
		Wani.makeSound();

		std::cout << "Wright :" << std::endl;
		std::cout << "Dog : ";
		dog.makeSound();
		std::cout << "Cat : ";
		cat.makeSound();
		std::cout << "Animal : ";
		ani.makeSound();
		std::cout << "Dog2 : ";
		dog2.makeSound();
		std::cout << "Cat2 : ";
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