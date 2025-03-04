#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include "Contact.class.hpp"

class PhoneBook
{
	private:
			Contact		_contact[8];
			int			_i;
			void		add(void);
		//	void		search(void);
			int			exit(std::string message);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		int	start(void);
		
		Contact getContact(int i);
};

#endif