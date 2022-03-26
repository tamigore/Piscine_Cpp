/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:33:35 by user42            #+#    #+#             */
/*   Updated: 2022/03/26 14:46:25 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

#include <iostream>
#include <time.h>
#include <stdlib.h>

template<typename T>
class Array
{
private:

	unsigned int	_size;
	T				*_array;

public:
	
	Array<T>(void) : _size(0), _array(NULL) {}

	Array<T>(unsigned int u) : _size(u), _array(new T[u]) {}

	~Array<T>(void)
	{
		std::cout << "delete..." << std::endl;
		if (_array)
			delete[] _array;
		_array = NULL;
	}

	Array<T>(const Array &data) : _size(0), _array(NULL);
	{
		if (this->_size != data._size)
		{
			this->_size = data._size;
			this->_array = new T[this->_size];
		}
		for (unsigned int i = 0; i < data._size; i++)
			this->_array[i] = data._array[i];
	}
	
	Array	&operator=(const Array &data)
	{
		if (this->_size != data._size)
		{
			this->_size = data._size;
			this->_array = new T[this->_size];
		}
		for (unsigned int i = 0; i < data._size; i++)
			this->_array[i] = data._array[i];
	}

	T	&operator[](const unsigned int i) const
	{
		if (i < 0 || i >= this->_size)
			throw std::out_of_range ("Invalid Array index.");
		return (*(this->_array + i));
	}

	unsigned int	size(void) const
	{
		return (this->_size);
	}
	
};

#endif