/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:13:20 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/17 18:53:51 by tamigore         ###   ########.fr       */
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

	ShrubberyCreationForm	*new1 = noob.makeForm();
	PresidentialPardonForm	*new2 = noob.makeForm();
	RobotomyRequestForm		*new3 = noob.makeForm();

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
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	
	try
	{
		toLow = new Bureaucrat("ToLow", 420);
		std::cerr << "Exception not working..." << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	
	delete bureaucrat;
	delete stagiaire;
	return (0);
}