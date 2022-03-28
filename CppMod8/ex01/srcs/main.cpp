/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:03:11 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/28 17:40:44 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <time.h>
#include <stdlib.h>

int main()
{
	{
		Span	sp = Span(5);

		std::cout << "Start with simple span" << std::endl;
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (unsigned long i = 0; i < sp._data.size(); i++)
		{
			std::cout << "Span[" << i << "] : " << sp._data[i] << std::endl;
		}
	}
	{
		Span	sp(1000);

		std::cout << "Second is random" << std::endl;
		srand(time(0));
		for (int i = 0; i < 1000; i++)
		{
			try
			{
				sp.addNumber(rand() % 20000);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		try
		{
				std::cout << sp.shortestSpan() << std::endl;
				std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
				std::cerr << e.what() << '\n';
		}
		
		Span	copy(100);

		std::cout << "Third is assigned from second[0] to second[500]" << std::endl;
		try
		{
			copy.addNumber(sp._data.begin(), sp._data.begin() + 100);
			std::cout << copy.shortestSpan() << std::endl;
			std::cout << copy.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		for (unsigned long i = 0; i < copy._data.size(); i++)
		{
			std::cout << "Span[" << i << "] : " << copy._data[i] << std::endl;
		}
	}
	return 0;
}