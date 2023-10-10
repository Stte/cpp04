#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	type = dog.type;
	brain = new Brain(*dog.brain);
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this == &dog)
		return (*this);
	delete brain;
	brain = new Brain(*dog.brain);
	type = dog.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "What's up dog!" << std::endl;
}

Brain &Dog::getBrain()
{
	return (*brain);
}
