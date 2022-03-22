/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:03:11 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/21 17:31:11 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 500

int main(int, char**)
{
	Array<int>	numbers(MAX_VAL);
	int*		mirror = new int[MAX_VAL];

	srand(time(NULL));
	std::cout << "Start :" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << "Values : array = " << numbers[i] << " | mirror  = " << mirror[i] << std::endl;
	}
	std::cout << "Size : " << numbers.size() << std::endl;

	std::cout << "Deep copy :" << std::endl;
	{
	    Array<int> tmp = numbers;
	    Array<int> test(tmp);
	}
	
	std::cout << "Compare values :" << std::endl;  
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	std::cout << "Try wrong index :" << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}

	std::cout << "End :" << std::endl;
	delete [] mirror;
	return 0;
}