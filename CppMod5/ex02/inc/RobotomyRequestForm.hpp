/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:53:21 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/23 17:12:43 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUESTFORM_HPP_
# define _ROBOTOMYREQUESTFORM_HPP_

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

};

#endif
