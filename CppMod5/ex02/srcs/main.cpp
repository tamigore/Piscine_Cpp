/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:13:20 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/23 17:26:38 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat				*bureaucrat = new Bureaucrat("Bob", 2);
	Bureaucrat				*stagiaire = new Bureaucrat("Ted", 149);
	ShrubberyCreationForm	shrub("tree");
	PresidentialPardonForm	president("Tadeo");
	RobotomyRequestForm		robot("coco");
	Form					*form = new ShrubberyCreationForm(shrub);
	
	try
	{
		form->execute(*bureaucrat);
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
	delete form;
	return (0);
}