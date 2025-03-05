#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include "Contact.hpp"

class PhoneBook
{
	private:
			Contact		_contact[8];
			int			_i;
			void		add(void);
			void		search(void);
			int			exit(std::string message);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		int	start(void);
};

#endif