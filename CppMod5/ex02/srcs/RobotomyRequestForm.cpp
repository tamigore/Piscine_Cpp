/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:15:09 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/19 15:31:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <stdlib.h> 

RobotomyRequestForm::RobotomyRequestForm() : Form("Robot", 45, 72), _target("Nul")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form(target, 45, 72), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &data) : Form(data.getTarget(), 45, 72), _target(data.getTarget())
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void		RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	srand(time(0));
	bool	valid = rand() % 2;

	if (executor.getGrade() > this->getGrade('e'))
		throw Form::GradeTooLowException();
	std::cout << "Brrrrrrrrrrrrr... Brrrrrrrrrrrrrrrrrr..." << std::endl;
	if (valid)
		std::cout << this->_target << " robotomization success !" << std::endl;
	else
		std::cout << this->_target << " robotomization failed..." << std::endl;
}