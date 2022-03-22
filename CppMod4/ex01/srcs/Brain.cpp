/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:19:40 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/22 12:59:52 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is built by default." << std::endl;
}

Brain::Brain(const Brain &data)
{
	*this = data;
	std::cout << "Brain is built by copy." << std::endl;
}

Brain	&Brain::operator=(const Brain &data)
{
	for (int i = 0; i < 100; i++)
    	this->ideas[i] = data.ideas[i];
	std::cout << "Brain is built by copy." << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain is destroy." << std::endl;
}
