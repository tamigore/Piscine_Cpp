/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:33:35 by user42            #+#    #+#             */
/*   Updated: 2022/03/26 14:48:52 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
# define _ITER_HPP_

#include <iostream>

template<typename T>
void	iter( T *tab, int len, void (*ptr)(T elem))
{
	for (int i = 0; i < len; i++)
		ptr(tab[i]);
}

template<typename T>
void	iter( T *tab, int len, void (*ptr)(const T &elem))
{
	for (int i = 0; i < len; i++)
		ptr(tab[i]);
}


#endif