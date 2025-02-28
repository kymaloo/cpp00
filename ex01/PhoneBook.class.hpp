#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include "Contact.class.hpp"

class PhoneBook
{
	public:
			Contact		contact[8];
			int			i;
			void		add(void);
		//	void		search(void);
};

#endif