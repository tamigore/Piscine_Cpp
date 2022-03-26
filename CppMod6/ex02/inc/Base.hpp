/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:13:52 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/24 15:00:07 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE_HPP_
# define _BASE_HPP_

#include <iostream>
#include <stdlib.h>
#include <stdexcept>
#include <time.h>

class Base
{
public:

	virtual ~Base(void) {};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif