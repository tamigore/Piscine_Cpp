#include "../include.hpp"

Contact::Contact(void)
{
	std::cout << "Initialize contact...\n";
}

Contact::~Contact(void)
{
	std::cout << "Destroy contact...\n";
}

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	std::cout << "Initialize repertory: index = " << this->index << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destroy repertory...\n";
}

void	Contact::setPrivate(void)
{
	std::cout << "Enter Phone Numer: ";
	std::cin >> this->_PhoneNumber;
	std::cout << "Enter Darkest Secret: ";
	std::cin >> this->_PhoneNumber;
}

void	Contact::getValues(void) const
{
	std::cout << this->FirstName;
	std::cout << this->FirstName;
	std::cout << "Enter Darkest Secret: ";
}

void	PhoneBook::Add(void)
{
	std::cout << "Enter First Name: ";
	std::cin >> this->book[this->index].FirstName;
	std::cout << "Enter Last Name: ";
	std::cin >> this->book[this->index].LastName;
	std::cout << "Enter Nickname: ";
	std::cin >> this->book[this->index].Nickname;
	this->book[this->index].setPrivate();
	if (this->index == 7)
		this->index = 0;
	else
		this->index++;
}

void	getSpace(const char *str)
{
	int		i;
	int		j;
	char	buf[10] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
		j = 9;
		if (i > 9)
		{
			i = 8;
			buf[j--] = '.';
		}
		while (i >= 0)
			buf[j--] = str[i--];
	}
	std::cout << "|" << buf;
}

void	PhoneBook::Search(void) const
{
	int	i;

	i = 0;
	if (this->index == 0)
		std::cout << "No contact...\n";
	else
	{
		while (i < this->index)
		{
			std::cout << "       " << i + 1;
			getSpace(this->book[i].FirstName);
			getSpace(this->book[i].LastName);
			getSpace(this->book[i].Nickname);
			std::cout << std::endl;
			i++;
		}
		std::cin >> i;
		if (i > 8 || i <= 0)
			std::cout << "No contact for index " << i << std::endl;
		else
			this->book[i -1].getValues();
	}
}

int	ft_strcmp(const char *a, const char *b)
{
	int	i;

	i = 0;
	if (!a && !b)
		return (-3);
	if (!a)
		return (-1);
	if (!b)
		return (-2);
	while (a[i] && b[i])
	{
		if (a[i] != b[i])
			return (a[i] - b[i] > 0 ? a[i] - b[i] : b[i] - a[i]);
		i++;
	}
	return (0);
}

int main()
{
	PhoneBook	repert;
	char		cmd[7];

	std::cout << "Input one of those command: ADD | SEARCH | EXIT: ";
	while (std::cin >> cmd)
	{
		if (ft_strcmp(cmd, "ADD") == 0)
			repert.Add();
		else if (ft_strcmp(cmd, "SEARCH") == 0)
			repert.Search();
		else if (ft_strcmp(cmd, "EXIT") == 0)
		{
			repert.~PhoneBook();
			return (0);
		}
		else
			std::cout << "command not found...\n";
		std::cout << "Command >";
	}
	return (0);
}