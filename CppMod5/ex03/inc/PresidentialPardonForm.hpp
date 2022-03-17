/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:53:21 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/17 18:48:34 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_HPP_
# define _PRESIDENTIALPARDONFORM_HPP_

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string _target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &data);
	PresidentialPardonForm(const std::string target);
	~PresidentialPardonForm();

	PresidentialPardonForm	&operator=(const PresidentialPardonForm &data);

	std::string		getTarget(void) const;
    void            execute(Bureaucrat const & executor) const;

	// class GradeTooHighException : public std::exception
	// {
	// 	public:
	// 		GradeTooHighException () throw();
	// 		GradeTooHighException (const GradeTooHighException&) throw();
	// 		GradeTooHighException& operator= (const GradeTooHighException&) throw();
	// 		virtual ~GradeTooHighException() throw();
	// 		virtual const char* what() const throw();
	// };
	// class GradeTooLowException : public std::exception
	// {
	// 	public:
	// 		GradeTooLowException () throw();
	// 		GradeTooLowException (const GradeTooLowException&) throw();
	// 		GradeTooLowException& operator= (const GradeTooLowException&) throw();
	// 		virtual ~GradeTooLowException() throw();
	// 		virtual const char* what() const throw();
	// };
};

#endif