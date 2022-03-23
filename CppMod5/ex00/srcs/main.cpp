/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:13:20 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/23 11:32:04 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	*bureaucrat = new Bureaucrat("Bob", 2);
	Bureaucrat	*stagiaire = new Bureaucrat("Ted", 149);

	try
	{
		std::cout << *bureaucrat;
		bureaucrat->upGrade();
		std::cout << bureaucrat->getName() << " upgraded ! Felicitations! " << std::endl;
		std::cout << *bureaucrat;
		bureaucrat->upGrade();
		std::cerr << "Exception does'nt work nicely. " << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	try
	{
		std::cout << *stagiaire;
		stagiaire->downGrade();
		std::cout << stagiaire->getName() << " downgraded ! That's suck! " << std::endl;
		std::cout << *stagiaire;
		stagiaire->downGrade();
		std::cerr << "Exception does'nt work nicely. " << std::endl;
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
		std::cerr << "Exception does'nt work nicely. " << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	
	try
	{
		toLow = new Bureaucrat("ToLow", 420);
		std::cerr << "Exception does'nt work nicely. " << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	
	delete bureaucrat;
	delete stagiaire;
}