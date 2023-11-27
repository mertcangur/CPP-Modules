#include "Brain.hpp"

Brain::Brain()
{
	//std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	//std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	//std::cout << "Brain operator= called" << std::endl;
	return (*this);
}

std::string Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}

void Brain::setIdea(int index, std::string idea)
{
	this->ideas[index] = idea;
}

Brain::~Brain()
{
	//std::cout << "Brain destructor called" << std::endl;
}
