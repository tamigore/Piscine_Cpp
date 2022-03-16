/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:15:09 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/16 20:01:15 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Nul"), _grade_s(150), _grade_e(150), _sign(0)
{
}

Form::Form(const std::string name, const int grade_e, const int grade_s) : _name(name),
	_grade_s(grade_s), _grade_e(grade_e), _sign(0)
{
	if (this->_grade_e < 1 || this->_grade_s < 1)
		throw Form::GradeTooHighException();
	else if (this->_grade_e < 1 || this->_grade_s < 1)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &data) : _name(data.getName()), _grade_s(data.getGrade('s')),
	_grade_e(data.getGrade('e')), _sign(data.getSign())
{
	if (this->_grade_e < 1 || this->_grade_s < 1)
		throw Form::GradeTooHighException();
	else if (this->_grade_e < 1 || this->_grade_s < 1)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form	&Form::operator=(const Form &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

int			Form::getGrade(const char c) const
{
	if (c == 's')
		return (this->_grade_s);
	else if (c == 'e')
		return (this->_grade_e);
	else
		return (0);
}

bool		Form::getSign(void) const
{
	return (this->_sign);
}

Form::GradeTooHighException::GradeTooHighException() throw() {}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException&) throw() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(const GradeTooHighException&) throw() 
{
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw() { return ("Grade is to high."); }

Form::GradeTooLowException::GradeTooLowException() throw() {}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException&) throw() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(const GradeTooLowException&) throw() 
{
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw() { return ("Grade is to low."); }


std::ostream	&operator<<(std::ostream & out, const Form & Form)
{
	out << Form.getName() << ", Form grade to sign " << Form.getGrade('s') << ", grade to execute " << Form.getGrade('e') << "< is signed: " << Form.getSign() << std::endl;
	return (out);
}
