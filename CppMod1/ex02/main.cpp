/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:24:52 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/09 17:35:45 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str: " << &str << " |ptr: " << stringPTR << " |ref: " << &stringREF << std::endl;
	std::cout << "str: " << str << " |ptr: " << *stringPTR << " |ref: " << stringREF << std::endl;
	return (0);
}