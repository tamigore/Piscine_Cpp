/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:15:09 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/17 17:03:43 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 5, 25), _target("Nul")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("presidential pardon", 5, 25), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &data) : Form("presidential pardon", 5, 25), _target(data.getTarget())
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void		PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGrade('e'))
		throw Form::GradeTooLowException();
	std::cout << "Zaphod Beeblebrox shows forgiveness upon " << this->_target << std::endl;
}