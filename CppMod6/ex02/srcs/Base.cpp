/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:15:09 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/24 15:02:33 by tamigore         ###   ########.fr       */
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
	A 	a;
	B	b;
	C	c;
	try
	{
		a = dynamic_cast<A &>(p);
		std::cout << "Reference is of type A" << std::endl;
		return ;
	}
	catch (...)
	{
	}
	try
	{
		b = dynamic_cast<B &>(p);
		std::cout << "Reference is of type B" << std::endl;
		return ;
	}
	catch (...)
	{
	}
	try
	{
		c = dynamic_cast<C &>(p);
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