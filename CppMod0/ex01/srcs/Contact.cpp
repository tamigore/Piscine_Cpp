/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:43:24 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/11 10:22:35 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int		Contact::setPrivate(void)
{
	std::string str[5];
	int         i = 0;
	
	std::cout << "Enter First Name: ";
	getline(std::cin, str[0]);
	if (str[0].length())
		while (isspace(str[0][i]))
			i++;
	if (!str[0].length() || str[0][i] == '\0')
		return (0);
	std::cout << "Enter Last Name: ";
	getline(std::cin, str[1]);
	i = 0;
	if (str[1].length())
		while (isspace(str[1][i]))
			i++;
	if (!str[1].length() || str[1][i] == '\0')
		return (0);
	std::cout << "Enter Nickname: ";
	getline(std::cin, str[2]);
	i = 0;
	if (str[2].length())
		while (isspace(str[2][i]))
			i++;
	if (!str[2].length() || str[2][i] == '\0')
		return (0);
	std::cout << "Enter Phone Numer: ";
	getline(std::cin, str[3]);
	i = 0;
	if (str[3].length())
		while (isspace(str[3][i]))
			i++;
	if (!str[3].length() || str[3][i] == '\0')
		return (0);
	std::cout << "Enter Darkest Secret: ";
	getline(std::cin, str[4]);
	i = 0;
	if (str[4].length())
		while (isspace(str[4][i]))
			i++;
	if (!str[4].length() || str[4][i] == '\0')
		return (0);
	this->_FirstName = str[0];
	this->_LastName = str[1];
	this->_Nickname = str[2];
	this->_PhoneNumber = str[3];
	this->_DarkestSecret = str[4];
	return (1);
}

std::string	Contact::getValues(char c) const
{
	if (c == 'F')
		return (this->_FirstName);
	else if (c == 'L')
		return (this->_LastName);
	else if (c == 'N')
		return (this->_Nickname);
	else if (c == 'P')
		return (this->_PhoneNumber);
	else if (c == 'D')
		return (this->_DarkestSecret);
	else
	{
		std::cout << "First name: " << this->_FirstName << std::endl;
		std::cout << "Last name: " << this->_LastName << std::endl;
		std::cout << "Nickname: " << this->_Nickname << std::endl;
		std::cout << "Phone number: " << this->_PhoneNumber << std::endl;
		std::cout << "Darkest secret: " << this->_DarkestSecret << std::endl;
	}
	return (this->_FirstName);
}
