/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:33:35 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/22 16:39:58 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>

class Span
{
	private :
		unsigned int		_N;

	public :

		std::vector<int>	_data;
		Span(void);
		Span(unsigned int n);
		Span(const Span &data);
		~Span(void);

		Span	&operator=(const Span &data);

		void	addNumber(int const nbr);
		void	addNumber(std::vector<int>::iterator const a, std::vector<int>::iterator const b);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

	class SpanIsFullException : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return ("ERROR: Span max entries reached");
			}
	};
	
	class SpanToFewObjectsException : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return ("ERROR: Span max entries reached");
			}
	};

};

#endif