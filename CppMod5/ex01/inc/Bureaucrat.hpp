/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:13:52 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/16 19:26:19 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &data);
	Bureaucrat(const std::string name, const int grade);
	~Bureaucrat();

	Bureaucrat	&operator=(const Bureaucrat &data);

	std::string	getName(void) const;
	int			getGrade(void) const;
	void		upGrade(void);
	void		downGrade(void);
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

std::ostream	&operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

#endif