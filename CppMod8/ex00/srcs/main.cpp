/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:03:11 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/28 17:01:51 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int, char**)
{
	std::vector<int>			test(10, 0);
	std::vector<int>::iterator	it = test.begin();
	int							i = 0;

	while (it != test.end())
	{
		*it = i++;
		std::cout << *it << ", ";
		it++;
	}
	std::cout << std::endl;
	std::cout << ">>> " << 1 << " <<<";
	try
	{
		EasyFind(test, 1);
		std::cout << " was found !" << std::endl;
	}
	catch	(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	//now with std::list container
	std::list<int>				test1(20, 0);
	std::list<int>::iterator	it1 = test1.begin();

	i = 0;
	while (it1 != test1.end())
	{
		*it1 += i++;
		std::cout << *it1 << ", ";
		it1++;
	}
	std::cout << std::endl;
	std::cout << ">>> " << 10 << " <<<";
	try
	{
		EasyFind(test1, 10);
		std::cout << " was found !" << std::endl;
	}
	catch	(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	//now with std::deque container
	std::deque<int>		test2(100, 0);
	std::deque<int>::iterator it2 = test2.begin();
	int				sfor2 = 100;

	i = 0;
	while (it2 != test2.end())
	{
		*it2 += i++;
		std::cout << *it2 << ", ";
		it2++;
	}
	std::cout << std::endl;
	std::cout << ">>> " << sfor2 << " <<<";
	try
	{
		EasyFind(test2, sfor2);
		std::cout << " was found !" << std::endl;
	}
	catch	(std::exception &e)
	{
		std::cout << "\n" << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}