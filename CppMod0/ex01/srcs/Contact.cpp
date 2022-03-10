/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:43:24 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/10 16:35:36 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int		Contact::setPrivate(void)
{
	std::string str;
	int         i = 0;
	
	std::cout << "Enter First Name: ";
	getline(std::cin, str);
	if (str.length())
		while (isspace(str[i]))
			i++;
	if (!str.length() || str[i] == '\0')
		return (0);
	this->_FirstName = str;
	std::cout << "Enter Last Name: ";
	getline(std::cin, str);
	i = 0;
	if (str.length())
		while (isspace(str[i]))
			i++;
	if (!str.length() || str[i] == '\0')
		return (0);
	this->_LastName = str;
	std::cout << "Enter Nickname: ";
	getline(std::cin, str);
	i = 0;
	if (str.length())
		while (isspace(str[i]))
			i++;
	if (!str.length() || str[i] == '\0')
		return (0);
	this->_Nickname = str;
	std::cout << "Enter Phone Numer: ";
	getline(std::cin, str);
	i = 0;
	if (str.length())
		while (isspace(str[i]))
			i++;
	if (!str.length() || str[i] == '\0')
		return (0);
	this->_PhoneNumber = str;
	std::cout << "Enter Darkest Secret: ";
	getline(std::cin, str);
	i = 0;
	if (str.length())
		while (isspace(str[i]))
			i++;
	if (!str.length() || str[i] == '\0')
		return (0);
	this->_DarkestSecret = str;
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