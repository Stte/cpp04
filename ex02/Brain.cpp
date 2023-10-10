#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this == &brain)
		return (*this);
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = brain.ideas[i];
	}
	return (*this);
}

void Brain::setIdea(std::string idea, int i)
{
	ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
	return (ideas[i]);
}
