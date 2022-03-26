/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:47:43 by user42            #+#    #+#             */
/*   Updated: 2022/03/24 14:44:55 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include <climits>
#include <cerrno>

class	NonPrintException : public std::exception
{
	public:
		virtual const char* what() const throw() {return ("Non displayable");}
};

class	ImpossiblePrintException : public std::exception
{
	public:
		virtual const char* what() const throw() {return ("impossible");}
};


int	toInt(const double f)
{
	if (f > INT_MAX || f < INT_MIN || f != f)
		throw ImpossiblePrintException();
	return (static_cast<int>(f));
}

char toChar(const double f, const std::string str)
{
	char c = static_cast<int>(f);

	if (str.size() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
		c = str[0];
	if (std::isprint(c))
		return c;
	else if (!std::isprint(c) && c != str[0] && f == f && f >= 0 && f <= 127)
		throw NonPrintException();
	else
		throw ImpossiblePrintException();
}

void	printChar(const float f, const std::string str)
{
	char	c;

	std::cout << "char: ";
	try
	{
		c = toChar(f, str);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << '\n';
		return ;
	}
	std::cout << "'" << c << "'" << std::endl;
}

void	printInt(const float f)
{
	int	i;

	std::cout << "int: ";
	try
	{
		i = toInt(f);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
		return ;
	}
	std::cout << i << std::endl;
}

void	printFloat(float f)
{
	double		intPart;
	std::string	last;

	last = std::modf(f, &intPart) != 0 ? "f" : ".0f";
	if (intPart == HUGE_VAL || intPart == -HUGE_VAL)
		last = "f";
	std::cout << "float: " << f << last << std::endl;
}

void		printDouble(double f, std::string str)
{
	double		intPart;
	double		fractPart;
	std::string	last;

	fractPart = std::modf(f, &intPart);
	last = fractPart != 0 ? "" : ".0";
	if (intPart == HUGE_VAL || intPart == -HUGE_VAL)
		last = "";
	if (fractPart == 0 && str.find("e+") != std::string::npos)
		last = "";
	std::cout << "double: " << static_cast<float>(f) << last << std::endl;
}

int main(int ac, char **av)
{
	char	*end;
	double	f;
	
	if (ac != 2 || !av[1])
	{
		std::cout << "Wrong argument format." << std::endl;
		return (-1);
	}
	f = strtod(av[1], &end);
	if (errno == ERANGE)
	{
		std::cout << "range error..." << std::endl;
		return (-1);
	}
	printChar(f, std::string(av[1]));
	printInt(f);
	printFloat(f);
	printDouble(f, std::string(av[1]));
	return (0);
}
