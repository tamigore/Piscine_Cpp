/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:53:21 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/17 18:27:13 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &data);
	RobotomyRequestForm(const std::string target);
	~RobotomyRequestForm();

	RobotomyRequestForm	&operator=(const RobotomyRequestForm &data);

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
