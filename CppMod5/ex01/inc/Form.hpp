/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:13:52 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/16 19:26:19 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
# define _FORM_HPP_

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_sign;
	const int			_grade_s;
	const int			_grade_e;

public:
	Form();
	Form(const Form &data);
	Form(const std::string name, const int grade_e, const int grade_s);
	~Form();

	Form	&operator=(const Form &data);

	std::string	getName(void) const;
	int			getGrade(const char c) const;
	bool		getSign(void) const;

	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException () throw();
			GradeTooHighException (const GradeTooHighException&) throw();
			GradeTooHighException& operator= (const GradeTooHighException&) throw();
			virtual ~GradeTooHighException() throw();
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException () throw();
			GradeTooLowException (const GradeTooLowException&) throw();
			GradeTooLowException& operator= (const GradeTooLowException&) throw();
			virtual ~GradeTooLowException() throw();
			virtual const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream & out, const Form & Form);

#endif