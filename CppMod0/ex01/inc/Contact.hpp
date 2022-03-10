#ifndef _CONTACT_HPP_
# define _CONTACT_HPP_

#include <iomanip>
#include <iostream>
#include <string>

class Contact
{
	public:

		int	    setPrivate(void);
		std::string getValues(char c) const;

	private:

    	std::string	_FirstName;
		std::string	_LastName;
		std::string	_Nickname;
		std::string	_DarkestSecret;
		std::string	_PhoneNumber;
};

#endif