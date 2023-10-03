#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Animal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Weird animal sounds" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMeow!" << std::endl;
}
