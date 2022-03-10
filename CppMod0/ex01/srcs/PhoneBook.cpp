/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:43:41 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/10 16:35:51 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	this->old = 0;
}

int		PhoneBook::Add(void)
{
	if (this->book[this->old].setPrivate() == 0)
		return (0);
	if (this->index <= 7)
		this->index++;
	if (this->old < 7)
		this->old++;
	else
		this->old = 0;
	return (1);
}

void	getSpace(std::string str)
{
	int		i;
	int		j;
	char	buf[11] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0'};

	i = 0;
	while (str[i])
		i++;
	j = 9;
	if (i > 10)
	{
		i = 8;
		buf[j--] = '.';
	}
	else
		i--;
	while (i >= 0)
		buf[j--] = str[i--];
	std::cout << "|" << buf;
}

int		ft_strlen(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	PhoneBook::Search(void) const
{
	std::string	cmp;
	int			i;

	i = 0;
	if (this->index == 0)
		std::cout << "No contact...\n";
	else
	{
		while (i < this->index)
		{
			std::cout << "         " << i + 1;
			getSpace(this->book[i].getValues('F'));
			getSpace(this->book[i].getValues('L'));
			getSpace(this->book[i].getValues('N'));
			std::cout << std::endl;
			i++;
		}
		std::cout << "Please enter an index to see the contact details: " << std::endl;
		getline(std::cin, cmp);
		if (ft_strlen(cmp) != 1 || cmp[0] - '0' > this->index)
			std::cout << cmp << " is not a valid index." << std::endl;
		else if (cmp[0] <= '8' && cmp[0] >= '1')
			this->book[cmp[0] - '1'].getValues(0);
		else
			std::cout << "No contact for index " << cmp << ".\n";
	}
}
