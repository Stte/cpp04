#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	type = dog.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "What's up dog!" << std::endl;
}
