#include "PhoneBook.hpp"
#define st std::string

contact PhoneBook::getAllContacts(int i)
{
	return (_contacts[i]);
}

void PhoneBook::setFNameContact(st input, int i)
{
	_contacts[i%8].setFirstName(input);
}

void PhoneBook::setLNameContact(st input, int i)
{
	_contacts[i%8].setLastName(input);
}

void PhoneBook::setNNanmeContact(st input, int i)
{
	_contacts[i%8].setNickName(input);
}

void PhoneBook::setNumberContact(st input, int i)
{
	_contacts[i%8].setPhoneNumber(input);
}

void PhoneBook::setDSecretContact(st input, int i)
{
	_contacts[i%8].setDarkestSecret(input);
}


int	add_contact(PhoneBook *phone,int i)
{
	st	Fname;
	st	Lname;
	st	Nname;
	st	Number;
	st	Dsecret;

	std::cout << CYAN "	ヘ( ^o^)ノ ADD MENUUU ＼(^_^ )\n\n";

	std::cout << BLUE "First Name : ";
	if(!std::getline(std::cin,Fname) || Fname.empty())
	{
		std::cout << RED "\nಥ﹏ಥ FIRSTNAME CAN'T BE EMPTY ಥ﹏ಥ"  BLUE<< std::endl;
		return (i);
	}
	std::cout << "Last Name : ";
	if(!std::getline(std::cin,Lname) || Lname.empty())
	{
		std::cout << RED "\nಥ﹏ಥ LASTNAME CAN'T BE EMPTY ಥ﹏ಥ"  BLUE<< std::endl;
		return (i);
	}

	std::cout << "Nick Name : ";
	if(!std::getline(std::cin,Nname) || Nname.empty())
	{
		std::cout << RED "\nಥ﹏ಥ NICKNAME CAN'T BE EMPTY ಥ﹏ಥ"  BLUE<< std::endl;
		return (i);
	}

	std::cout << "Phone Number : ";
	if(!std::getline(std::cin,Number) || Number.empty())
	{
		std::cout << RED "\nಥ﹏ಥ PHONE NUMBER CAN'T BE EMTYP ಥ﹏ಥ"  BLUE<< std::endl;
		return (i);
	}

	std::cout << "DARKNEST SECRET : ";
	if(!std::getline(std::cin,Dsecret) || Dsecret.empty())
	{
		std::cout << RED "\nಥ﹏ಥ DARKNESS SECRET CAN'T BE EMTYP ಥ﹏ಥ"  BLUE<< std::endl;
		return (i);
	}
	std::cout << DEFAULT;


	std::cout << GREEN "\nᕙ(  •̀ ᗜ •́  )ᕗ USER ADDED ᕙ(  •̀ ᗜ •́  )ᕗ"  DEFAULT<< std::endl;
	phone->setFNameContact(Fname,i);
	phone->setLNameContact(Lname,i);
	phone->setNNanmeContact(Nname,i);
	phone->setNumberContact(Number,i);
	phone->setDSecretContact(Dsecret,i);
	i++;


	return (i);
}
std::string shortCut(std::string kelime)
{
	if (kelime.length() > 9)
		return kelime.substr(0, 9) + ".";
	else
		return kelime;
}

void	print_infos(PhoneBook phone,int i)
{
	i--;
	std::cout << CYAN "\nName     : " <<phone.getAllContacts(i).getName() <<std::endl;
	std::cout << "Surname  : " <<phone.getAllContacts(i).getLastName()<<std::endl;
	std::cout << "Nicname  : " << phone.getAllContacts(i).getNickName() <<std::endl;
	std::cout << "Number   : " << phone.getAllContacts(i).getPhoneNumber() <<std::endl;
	std::cout << "DarknesS : " << phone.getAllContacts(i).getSecretInfo() << DEFAULT <<std::endl;
}
int is_digit(std::string check)
{
	if(check.empty())
		return (0);
	int i = 0;
	while(check[i])
	{

		if(!std::isdigit(check[i]))
			return (0);
		i++;
	}
	if(std::stoi(check) > 0)
		return (1);
	return (0);
}

void print_it(PhoneBook phone)
{
	int i = 0;
	std:: cout << GREEN "	٩( ᐖ ) PHONEBOOK LIST ( ᐛ )و\n";
	std::string	choose;
	std::cout << std::setw(45) << std::setfill('-') << "" << std::setfill(' ') << std::endl;
	std::cout << "|"<< std::setw(10) << "INDEX"<< "|" << std::setw(10) << "NAME" <<"|" << std::setw(10) << "LASTNAME" << "|"<< std::setw(10) << "NICKNAME" << "|"<<std::endl;
	std::cout << std::setw(45) << std::setfill('-') << "" << std::setfill(' ') << std::endl;

	while (i<=7)
	{
		if(!phone.getAllContacts(i).getName().empty())
		{
			std::cout << "|"<< std::setw(10) << i+1;
			std::cout << "|" << std::setw(10) << shortCut(phone.getAllContacts(i).getName());
			std::cout << "|" << std::setw(10) << shortCut(phone.getAllContacts(i).getLastName());
			std::cout << "|" << std::setw(10) << shortCut(phone.getAllContacts(i).getNickName()) << "|"<<std::endl;
			std::cout << std::setw(45) << std::setfill('-') << "" << std::setfill(' ') << std::endl;
		}
		else
			break;
		i++;
	}
	i++;
	std::cout << "\nChoose a user index: ";
	std::getline(std::cin,choose);
	if(is_digit(choose) && std::stoi(choose)<i)
			print_infos(phone,std::stoi(choose));
	else
		std::cout << RED "ಥ﹏ಥ INVALID COMMAND ಥ﹏ಥ" DEFAULT<< std::endl;

}



