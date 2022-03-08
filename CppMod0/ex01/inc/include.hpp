#ifndef _INCLUDE_H_
# define _INCLUDE_H_

#include <iomanip>
#include <iostream>
#include <string>

class Contact
{
	public:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;

		void	setPrivate(void);
		void	getValues(void) const;

	private:
		std::string	_DarkestSecret;
		std::string	_PhoneNumber;
};

class PhoneBook
{
	public:
		int		index;
		int		old;
		Contact	book[8];

		void	Add(void);
		void	Search(void) const;

		PhoneBook(void);
};

#endif