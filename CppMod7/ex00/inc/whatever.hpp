/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:33:35 by user42            #+#    #+#             */
/*   Updated: 2022/03/25 17:58:02 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP_
# define _WHATEVER_HPP_

#include <iostream>

template<typename T>
const T &max(const T &A, const T &B) 
{
	return (A > B ? A : B); 
}

template<typename T>
const T &min(const T &A, const T &B) 
{
	return (A < B ? A : B); 
}

template<typename T>
void	swap(T &A,  T &B) 
{
	T	tmp = A;

	A = B;
	B = tmp;
}

#endif