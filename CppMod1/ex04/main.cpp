/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:22:32 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/10 20:42:38 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac , char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong arguments\n";
		return (0);
	}
	if (!av[1] || !av[2] || !av[3] || !av[1][0] == '\0' || !av[2][0] == '\0')
	{
		std::cout << "Arguments wrong format\n";
		return (0);
	}
	std::ifstream is ("test.txt", std::ifstream::binary);
	if (is)
	{
		// get length of file:
		is.seekg (0, is.end);
		int	length = is.tellg();
		is.seekg (0, is.beg);

		char	*buffer = new char [length];

		std::cout << "Reading " << length << " characters... ";
		// read data as a block:
		is.read (buffer,length);

		if (is)
		  std::cout << "all characters read successfully.";
		else
		  std::cout << "error: only " << is.gcount() << " could be read";
		is.close();
		// ...buffer contains the entire file...
		int	i = 0;
		int j;
		int tmp;
		while (buffer[i])
		{
			j = 0;
			tmp = i;
			while (buffer[i] && av[2][j] && buffer[i] == av[2][j])
			{
				j++;
				i++;
			}
			if (av[2][j] == '\0')
			{
				while ()
			}
			i = tmp + 1;
		}
		std::fstream fs;
		std::string con = av[1];
		std::string cat = ".replace";
		std::string fname = con + cat;
 		fs.open (fname, std::fstream::in | std::fstream::out | std::fstream::app);
		if (fs.is_open())
		{
 			fs << buffer;
			fs.close();
		}
		else
			std::cout << "failde to open file\n";
		delete[] buffer;
	}
}