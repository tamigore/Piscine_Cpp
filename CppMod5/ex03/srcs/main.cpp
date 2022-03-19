/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:13:20 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/18 12:13:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat				*bureaucrat = new Bureaucrat("Bob", 2);
	Bureaucrat				*stagiaire = new Bureaucrat("Ted", 149);
	ShrubberyCreationForm	shrub("tree");
	PresidentialPardonForm	president("Tadeo");
	RobotomyRequestForm		robot("coco");
	Intern					noob;
	
	try
	{
		std::cout << *bureaucrat << std::endl;
		bureaucrat->upGrade();
		std::cout << bureaucrat->getName() << " upgraded ! Felicitations! " << std::endl;
		std::cout << *bureaucrat << std::endl;
		shrub.execute(*bureaucrat);
		std::cout << std::endl;
		robot.execute(*bureaucrat);
		std::cout << std::endl;
		president.execute(*bureaucrat);
		std::cout << std::endl;
		bureaucrat->executeForm(president);
		std::cout << std::endl;
		bureaucrat->upGrade();
		std::cerr << "Exception not working..." << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	// ShrubberyCreationForm	*new1 = noob.makeForm("shrubbery creation", "Big");
	// PresidentialPardonForm	*new2 = noob.makeForm("presidential pardon", "Tadeo");
	// RobotomyRequestForm		*new3 = noob.makeForm("robotomy request", "ClapTrap");

	Form	*new1 = noob.makeForm("shrubbery creation", "Big");
	Form	*new2 = noob.makeForm("presidential pardon", "Tadeo");
	Form	*new3 = noob.makeForm("robotomy request", "ClapTrap");

	std::cout << std::endl;
	std::cout << *new1 << std::endl;
	std::cout << *new2 << std::endl;
	std::cout << *new3 << std::endl;
	std::cout << std::endl;

	delete new1;
	delete new2;
	delete new3;

	try
	{
		std::cout << *stagiaire << std::endl;
		stagiaire->downGrade();
		std::cout << stagiaire->getName() << " downgraded ! That's suck! " << std::endl;
		std::cout << *stagiaire << std::endl;
		stagiaire->downGrade();
		std::cerr << "Exception not working..." << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	Bureaucrat* toHigh;
	Bureaucrat* toLow;
	
	try
	{
		toHigh = new Bureaucrat("ToHigh", 0);
		std::cerr << "Exception not working..." << std::endl;
		delete toHigh;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	
	try
	{
		toLow = new Bureaucrat("ToLow", 420);
		std::cerr << "Exception not working..." << std::endl;
		delete toLow;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	
	delete bureaucrat;
	delete stagiaire;
	return (0);
}