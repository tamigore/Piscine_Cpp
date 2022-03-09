#include "include.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	this->old = 0;
}

void	Contact::setPrivate(void)
{
	std::cout << "Enter Phone Numer: ";
	getline(std::cin, this->_PhoneNumber);
	std::cout << "Enter Darkest Secret: ";
	getline(std::cin, this->_DarkestSecret);
}

void	Contact::getValues(void) const
{
	std::cout << this->FirstName << std::endl;
	std::cout << this->LastName << std::endl;
	std::cout << this->Nickname << std::endl;
	std::cout << this->_PhoneNumber << std::endl;
	std::cout << this->_DarkestSecret << std::endl;
}

void	PhoneBook::Add(void)
{
	std::cout << "Enter First Name: ";
	getline(std::cin, this->book[this->old].FirstName);
	std::cout << "Enter Last Name: ";
	getline(std::cin, this->book[this->old].LastName);
	std::cout << "Enter Nickname: ";
	getline(std::cin, this->book[this->old].Nickname);
	this->book[this->old].setPrivate();
	if (this->index <= 7)
		this->index++;
	if (this->old < 7)
		this->old++;
	else
		this->old = 0;
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
			getSpace(this->book[i].FirstName);
			getSpace(this->book[i].LastName);
			getSpace(this->book[i].Nickname);
			std::cout << std::endl;
			i++;
		}
		std::cout << "Please enter an index to see the contact details: " << std::endl;
		getline(std::cin, cmp);
		if (ft_strlen(cmp) != 1)
			std::cout << cmp << " is not a valid index." << std::endl;
		else if (cmp[0] <= '8' && cmp[0] >= '1')
			this->book[cmp[0] - '1'].getValues();
		else
			std::cout << "No contact for index " << cmp << ".\n";
	}
}

int main()
{
	PhoneBook	repert;
	std::string	cmd;

	std::cout << "Input one of those command: ADD | SEARCH | EXIT: ";
	while (getline(std::cin, cmd))
	{
		if (cmd == "ADD")
			repert.Add();
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