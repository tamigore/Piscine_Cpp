/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:01:01 by user42            #+#    #+#             */
/*   Updated: 2022/03/22 13:00:35 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(const Animal &data);
	Animal(const std::string type);
	virtual ~Animal();

	Animal	&operator=(const Animal &data);

	std::string	getType(void) const;
	void		virtual makeSound(void) const;
	std::string	getIdea(int n) const;
	void		setIdea(int n, std::string mem) const;
};

#endif