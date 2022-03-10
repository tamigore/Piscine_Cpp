#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

#include <iomanip>
#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public:
		int		index;
		int		old;
		Contact	book[8];

		int		Add(void);
		void	Search(void) const;

		PhoneBook(void);
};

#endif