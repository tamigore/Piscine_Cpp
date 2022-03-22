/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:31:54 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/22 16:40:55 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0),_data()
{
	std::cout << "Span constructor default" << std::endl;
}

Span::Span(unsigned int n) : _N(n), _data()
{
	std::cout << "Span constructor" << std::endl;
}

Span::Span(const Span &data) : _N(data._N), _data(data._data)
{
	std::cout << "Span copy constructor" << std::endl;
}

Span::~Span(void)
{
	std::cout << "Span destructor" << std::endl;
}

Span			&Span::operator=(const Span &data)
{
	this->_N = data._N;
	this->_data = data._data;
	std::cout << "Span copy operator" << std::endl;
	return (*this);
}

void			Span::addNumber(int const nbr)
{
	if (this->_data.size() > this->_N)
		throw Span::SpanIsFullException();
	else
		_data.push_back(nbr);
}

void	Span::addNumber(std::vector<int>::iterator const a, std::vector<int>::iterator const b)
{
	if (b - a > _N)
		throw Span::SpanIsFullException();
	else
		_data.assign(a, b);
}

unsigned int	Span::shortestSpan(void) const
{
	if (this->_N <= 1 || this->_data.size() <= 1)
		throw Span::SpanToFewObjectsException();
	else
	{
		std::vector<int>copy(this->_data);
		std::vector<int>::iterator it = copy.begin();
		int		min = 2147483647;

		while (it != (copy.end() - 1) && min)
		{
			if (abs(*(it + 1) - *it) < min)
			{
				min = abs(*(it + 1) - *it);
				std::cout << "min : " << min << " | it : " << *it << " | it + 1 : " << *(it + 1) << std::endl;
			}
			it++;
		}
		return (min);
	}
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_N <= 1 || this->_data.size() <= 1)
		throw Span::SpanToFewObjectsException();
	else
	{
		return (*std::max_element(this->_data.begin(), this->_data.end()) -
			*std::min_element(this->_data.begin(), this->_data.end()));
	}
}

