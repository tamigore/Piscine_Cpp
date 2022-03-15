/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:33:35 by user42            #+#    #+#             */
/*   Updated: 2022/03/15 18:27:32 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*_br;

public:
	Cat();
	Cat(std::string name);
	Cat(const Cat &data);
	~Cat();

	Cat	&operator=(const Cat &data);
	
	void	makeSound(void) const;
};

#endif
