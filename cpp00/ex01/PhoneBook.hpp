#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

# define RED		"\x1B[31m"
# define GREEN		"\x1B[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1B[34m"
# define PURPLE		"\x1B[35m"
# define CYAN		"\x1B[36m"
# define DEFAULT	"\x1b[0m"


class PhoneBook
{
	private:

		contact _contacts[8];

	public:

		contact	getAllContacts(int i);
		void	setFNameContact(st input, int i);
		void	setLNameContact(st input, int i);
		void	setNNanmeContact(st input, int i);
		void	setNumberContact(st input, int i);
		void	setDSecretContact(st input, int i);
};

int add_contact(PhoneBook *phone,int i);
void print_it(PhoneBook phone);



#endif
