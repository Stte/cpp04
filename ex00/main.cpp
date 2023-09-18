#include "Animal.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();

	meta->makeSound();
	std::cout << "Type: " << meta->getType() << std::endl;
	dog->makeSound();
	std::cout << "Type: " << dog->getType() << std::endl;
	cat->makeSound();
	std::cout << "Type: " << cat->getType() << std::endl;

	delete(meta);
	delete(dog);
	delete(cat);
	return (0);
}
