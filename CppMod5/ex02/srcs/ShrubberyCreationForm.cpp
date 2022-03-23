/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:15:09 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/23 17:22:53 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#define NB_TREE 2

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 137, 145), _target("Nul")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form(target, 137, 145), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &data) : Form(data.getTarget(), 137, 145), _target(data.getTarget())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

std::string	printTree(void)
{
	std::string res;

    for(unsigned int i = 0; i < LINES; ++i)
    {
        res.append(LINES - i - 1, ' ');
        res.append(1 + 2 * i, FULL);
        res.append(LINES - i - 1, ' ');
        res += "\n";
    }
    for(unsigned int i = 0; i < TRUNK; ++i)
    {
        res.append(LINES - TRUNK / 2 - 1, ' ');
        res.append(TRUNK, FULL);
        res.append(LINES - TRUNK / 2 - 1, ' ');
        res += "\n";
	}
	res.append(LINES + TRUNK + 3, '|');
	return (res);
}

void		ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::fstream		file;
	const std::string	name = this->_target + "_shrubbery";

	if (this->getGrade('e') < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	file.open(name.c_str(), std::fstream::in | std::fstream::out | std::ios::trunc);
	if (file.is_open())
	{
		for (int i = 0; i < NB_TREE; i++)
			file << printTree() << std::endl;
		file.close();
	}
	else
		std::cout << "Error : failed to open." << std::endl;
}