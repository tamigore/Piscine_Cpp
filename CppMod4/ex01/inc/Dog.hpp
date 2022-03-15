/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:33:35 by user42            #+#    #+#             */
/*   Updated: 2022/03/15 18:05:48 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*_br;

public:
	Dog();
	Dog(std::string name);
	Dog(const Dog &data);
	~Dog();

	Dog	&operator=(const Dog &data);
	
	void	makeSound(void) const;
};

#endif
