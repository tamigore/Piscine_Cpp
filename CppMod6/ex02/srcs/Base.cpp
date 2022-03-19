/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:15:09 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/19 15:29:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base    *generate(void)
{
	srand(time(0));
	int i = rand() % 3;

	if (i == 0)
	{
		std::cout << "Type A generated " << std::endl;
		return (new A);
	}
	else if ( i == 1)
	{
		std::cout << "Type B generated " << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Type C generated " << std::endl;
		return (new C);
	}
}

void identify(Base &p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "Reference is of type A" << std::endl;
		return ;
	}
	catch (...)
	{
	}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "Reference is of type B" << std::endl;
		return ;
	}
	catch (...)
	{
	}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "Reference is of type C" << std::endl;
		return ;
	}
	catch (...)
	{
	}
}


void identify(Base *p)
{
	if 	(dynamic_cast<A *>(p))
	{
		std::cout << "Reference is of type A" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(p))
	{
		std::cout << "Reference is of type B" << std::endl;
		return ;
	}
	if (dynamic_cast<C *>(p))
	{
		std::cout << "Reference is of type C" << std::endl;
		return ;
	}
}