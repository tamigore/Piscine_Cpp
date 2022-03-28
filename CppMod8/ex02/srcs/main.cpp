/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:03:11 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/28 17:43:50 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	test;
	//std::stack<int>		test;
	
	test.push(10);
	test.push(-3);
	test.push(1210);
	test.push(391281);
	test.push(-12897);
	test.push(666);

	std::cout << "size: " << test.size() << std::endl;
	test.push(-333);
	std::cout << "top: " << test.top() << std::endl;
	test.pop();
	std::cout << "pop: " << test.top() << std::endl;
	std::cout << "Test is "; 
	if (!test.empty())
		std::cout << "not ";
	std::cout << "empty" << std::endl;

	MutantStack<int>::iterator	itt = test.begin();
	//std::stack<int>::container_type::iterator	itt = test.begin();
	
	while (itt != test.end())
	{
		std::cout << *itt << ", ";
		itt++;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//TEST WITH FLOATS
	MutantStack<float>	test1;
	
	test1.push(10);
	test1.push(-3);
	test1.push(12.10);
	test1.push(3912.81);
	test1.push(-12.897);
	test1.push(66.6);

	std::cout << "size: " << test1.size() << std::endl;
	test1.push(-33.3);
	std::cout << "top: " << test1.top() << std::endl;
	test1.pop();
	std::cout << "pop: " << test1.top() << std::endl;
	std::cout << "Test is "; 
	if (!test1.empty())
		std::cout << "not ";
	std::cout << "empty" << std::endl;

	MutantStack<float>::iterator	itt1 = test1.begin();
	
	while (itt1 != test1.end())
	{
		std::cout << *itt1 << ", ";
		itt1++;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//TEST WITH STRING
	MutantStack<std::string>	test2;
	
	test2.push("lala");
	test2.push("lolo");
	test2.push("42");
	test2.push("toad");
	test2.push("one for all");
	test2.push("Tonight we are young so let set the world on fireeee ye can burn brighter than the sunnnn");

	std::cout << "size: " << test2.size() << std::endl;
	test2.push("No Entry");
	std::cout << "top: " << test2.top() << std::endl;
	test2.pop();
	std::cout << "pop: " << test2.top() << std::endl;
	std::cout << "Test is "; 
	if (!test2.empty())
		std::cout << "not ";
	std::cout << "empty" << std::endl;

	MutantStack<std::string>::iterator	itt2 = test2.begin();
	
	while (itt2 != test2.end())
	{
		std::cout << *itt2 << ", ";
		itt2++;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//School main :
	MutantStack<int>	mstack;
	MutantStack<int>	copy;

	mstack.push(5);
	mstack.push(17);
	std::cout << "First element = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack size = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Iterating mstack :" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	copy = mstack;

	it = copy.begin();
	ite = copy.end();
	
	std::cout << "Iterating copy:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	copy.push(42);
	copy.push(666);
	copy.push(420);
	copy.push(1000000000);

	it = copy.begin();
	ite = copy.end();
	
	std::cout << "Iterating copy:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	it = copy.begin();
	ite = copy.end();
	
	std::cout << "Iterating mutant:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	return 0;
}
