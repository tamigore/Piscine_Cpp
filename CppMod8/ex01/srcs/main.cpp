/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:03:11 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/22 16:41:34 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <time.h>
#include <stdlib.h>

int main()
{
	{
		Span	sp = Span(5);

		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			return (-1);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span	sp(500);

		// for (int i = 0; i < 10000; i++)
		// {
			try
			{
				sp.addNumber(sp._data.begin(), sp._data.end());
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				return (-1);
			}
		// }
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span	sp(100);

		srand(time(0));
		for (int i = 0; i < 100; i++)
		{
			try
			{
				sp.addNumber(rand() % 20000);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				return (-1);
			}
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	return 0;
}