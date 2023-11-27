#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phone;
	int			i;
	st input;

	input = "";
	i = 0;
	std::cout<< GREEN "\n-----------------------------------------" << std::endl;
	std::cout<<  "ᕦ(⩾﹏⩽)ᕥ  WELLCOME TO PHONEBOOK  ᕦ(⩾﹏⩽)ᕥ" << std::endl;
	std::cout<<  "-----------------------------------------\n" DEFAULT << std::endl;

	while (1)
	{


		std::cout << YELLOW "\n \\(°Ω°)/COMMANDS\\(°Ω°)/" << std::endl;
		std::cout << BLUE "| (ಡ_ಡ)☞	ADD    |\n| (ಡ_ಡ)☞	SEARCH |\n| (ಡ_ಡ)☞	EXIT   |\n" DEFAULT << std::endl;
		std::cout << "> ";

		if(!std::getline(std::cin,input))
			return (0);
		if(!input.compare("EXIT"))
		{
			std::cout << PURPLE " (ಥ﹏ಥ) BYE BYE (ಥ﹏ಥ)" DEFAULT << std::endl;
			return (0);
		}
		else if(!input.compare("ADD"))
			i = add_contact(&phone,i);
		else if(!input.compare("SEARCH"))
			print_it(phone);
		else
			std::cout << RED "ಥ﹏ಥ INVALID COMMAND ಥ﹏ಥ" DEFAULT<< std::endl;

	}
	return (0);

}
