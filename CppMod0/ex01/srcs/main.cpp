/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:43:32 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/10 16:35:44 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook	repert;
	std::string	cmd;

	std::cout << "Input one of those command: ADD | SEARCH | EXIT: ";
	while (getline(std::cin, cmd))
	{
		if (cmd == "ADD")
		{
			if (!repert.Add())
				std::cout << "Error with the new contact, please retry." << std::endl;
		}
		else if (cmd == "SEARCH")
			repert.Search();
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "command not found...\n";
		std::cout << "Input: ";
	}
	return (0);
}