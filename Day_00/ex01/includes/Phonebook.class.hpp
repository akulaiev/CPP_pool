
#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class Phonebook
{
public:

	Contact		user_data[8];

	void 		get_all_contacts(int user_num);
	void		search(int user_num);

private:	
	int			exit(int exit_code) const;
	Contact		add_user_info(void);
};

#endif
