#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <csignal>
#include <cstdlib>
#include <iomanip>
# define st std::string

class contact
{
	private:
		st	FirstName;
		st	LastName;
		st	NickName;
		st	PhoneNumber;
		st	DarkestSecret;

	public:
	
		st	getName();
		st	getLastName();
		st	getNickName();
		st	getPhoneNumber();
		st	getSecretInfo();

		void setFirstName(st input);
		void setLastName(st input);
		void setNickName(st input);
		void setPhoneNumber(st number);
		void setDarkestSecret(st input);


};

#endif
