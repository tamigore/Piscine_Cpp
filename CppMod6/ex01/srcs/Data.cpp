/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:15:09 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/19 14:20:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void)
{
}

Data::Data(uintptr_t raw)
{
	this->_raw = raw;
}

Data::Data(Data &data)
{
	this->_raw = data.getRaw();
}

Data	&Data::operator=(Data &data)
{
	if (this != &data)
		*this = data;
	return (*this);
}

Data::~Data(void)
{
}

uintptr_t	Data::getRaw(void)
{
	return (this->_raw);
}

uintptr_t	Data::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Data::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}