/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:33:35 by user42            #+#    #+#             */
/*   Updated: 2022/03/22 14:16:59 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
# define _EASYFIND_HPP_

#include <iostream>
#include <vector>		// dynamic array	random access iterator
#include <list>			// double linked list	bidirectional iterator
#include <deque>		// double ended queue	random access iterator
# include <algorithm>
# include <stdexcept>

class EasyNotFoundException : public std::exception
{
	public:
		virtual const char * what() const throw ()
		{
			return ("ERROR: Nothing could be found");
		}
};

template<typename T>
void    EasyFind(T cont, int nb)
{
    if (std::find(cont.begin(), cont.end(), nb) == cont.end())
		throw EasyNotFoundException();
}

#endif