#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include "Contact.hpp"

class PhoneBook
{
	private:
			Contact		_contact[8];
			std::string	_search[3];
			int			_i;
			void		add(void);
			void		search(void);
			int			exit(std::string message);
			void		printContactWithIndex(void);
			void		initSearch(int i);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		int	start(void);
};

#endif