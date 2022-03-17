/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:15:09 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/17 18:26:51 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Nul"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &data) : _name(data.getName())
{
	if (data.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (data.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = data.getGrade();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::upGrade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void		Bureaucrat::downGrade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void		Bureaucrat::signForm(Form &doc)
{
	if (doc.getSign() == 1)
		std::cout << doc << "already signed." << std::endl;
	if (this->_grade <= doc.getGrade('s'))
	{
		doc.setSign(1);
		std::cout << *this << " signed " << doc << std::endl;
	}
	else
		std::cout << *this << " couldn't signed form because grade was insuficient." << std::endl;
}

void	Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << "Exeption :" << std::endl;
		std::cout << e.what() << std::endl;
		std::cout << this->getName() << " could not execute: " << form << std::endl;
		std::cout << this->getName() << " has grade " << this->getGrade() <<  std::endl;
	}
	
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException&) throw() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException&) throw() 
{
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() { return ("Grade is to high."); }

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException&) throw() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException&) throw() 
{
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() { return ("Grade is to low."); }


std::ostream	&operator<<(std::ostream & out, const Bureaucrat & bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
