#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	type = animal.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Weird animal sounds" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
