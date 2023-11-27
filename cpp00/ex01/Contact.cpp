#include "Contact.hpp"

st contact::getName()
{
	return (FirstName);
}

st contact::getLastName()
{
	return (LastName);
}

st contact::getNickName()
{
	return (NickName);
}

st contact::getPhoneNumber()
{
	return (PhoneNumber);
}

st contact::getSecretInfo()
{
	return (DarkestSecret);
}

void contact::setFirstName(st input)
{
	FirstName = input;
}

void contact::setLastName(st input)
{
	LastName = input;
}

void contact::setNickName(st input)
{
	NickName = input;
}

void contact::setPhoneNumber(st number)
{
	PhoneNumber = number;
}

void contact::setDarkestSecret(st input)
{
	DarkestSecret = input;
}
