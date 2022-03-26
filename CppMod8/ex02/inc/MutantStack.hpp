/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:33:35 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/26 14:02:56 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public :

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator const	begin(void) {return this->c.begin();}
		iterator const	end(void) {return this->c.end();}

};

#endif
