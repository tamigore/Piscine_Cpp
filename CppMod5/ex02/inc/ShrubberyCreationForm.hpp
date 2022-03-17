/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:53:21 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/17 18:26:59 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_HPP_
#define _SHRUBBERYCREATIONFORM_HPP_

#include "Form.hpp"
#include <fstream>

#define FULL '#' // character for tree
#define LINES 6 // line number of the tree
#define TRUNK 2	// trunk nuber of char width

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &data);
	ShrubberyCreationForm(const std::string target);
	~ShrubberyCreationForm();

	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &data);

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