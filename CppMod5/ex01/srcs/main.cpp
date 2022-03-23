/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:13:20 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/23 17:00:15 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	*bureaucrat = new Bureaucrat("Bob", 2);
	Bureaucrat	*stagiaire = new Bureaucrat("Ted", 149);
	Form		*doc = new Form("doc", 1, 1);
	Form		*trash = new Form();
	
	try
	{
		std::cout << *bureaucrat << " want to signe " << *doc << std::endl;
		bureaucrat->signForm(*doc);
		doc->beSigned(*bureaucrat);
		bureaucrat->upGrade();
		std::cout << bureaucrat->getName() << " upgraded ! Felicitations! " << std::endl;
		std::cout << *bureaucrat << std::endl;
		bureaucrat->signForm(*doc);
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
		bureaucrat->signForm(*trash);
		stagiaire->downGrade();
		std::cout << stagiaire->getName() << " downgraded ! That's suck! " << std::endl;
		std::cout << *stagiaire << std::endl;
		bureaucrat->signForm(*trash);
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
	delete doc;
	delete trash;
	return (0);
}