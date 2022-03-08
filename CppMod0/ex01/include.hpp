#ifndef _INCLUDE_H_
# define _INCLUDE_H_

#include <iomanip>
#include <iostream>

class Contact
{
	public:
		char	FirstName[10];
		char	LastName[10];
		char	Nickname[10];

		void	setPrivate(void);
		void	getValues(void) const;
		/* Constructor  */
		Contact(void);
		/* Destructor */
		~Contact(void);
	private:
		char	_DarkestSecret[100];
		char	_PhoneNumber[10];
};

class PhoneBook
{
	public:
		int		index;
		Contact	book[8];

		void	Add(void);
		void	Search(void) const;
		/* Constructor  */
		PhoneBook(void);
		/* Destructor */
		~PhoneBook(void);
};

#endif