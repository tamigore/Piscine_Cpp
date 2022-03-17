/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:34:46 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/17 18:40:17 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern & cpy)
{
	*this = cpy;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(const Intern & right)
{
	*this = right;
	return (*this);
}

Form *Intern::makeForm(const std::string & name, const std::string & target)
{
	Form	*form[3];
	int		i = 00;
	int		save = -1;

	form[0] = new ShrubberyCreationForm(target);
	form[1] = new RobotomyRequestForm(target);
	form[2] = new PresidentialPardonForm(target);
	while (i < 3)
	{
		if (form[i]->getName() == name)
			save = i;
		else
			delete form[i];
		i++;
	}
	if (save >= 0)
	{
		std::cout << "Intern creates " << name << " for " << target << std::endl;
		return (form[save]);
	}
	std::cout << "There is no form " << name << "! Go and make some coffee !" << std::endl;
	return (NULL);
}