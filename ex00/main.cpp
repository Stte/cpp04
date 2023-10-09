#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	const Dog *dog = new Dog();
	const Cat *cat = new Cat();
	const Animal *catAnimal = new Cat();

	std::cout << "===== Animal ===== " << std::endl;

	meta->makeSound();
	std::cout << "Type: " << meta->getType() << std::endl;
	dog->makeSound();
	std::cout << "Type: " << dog->getType() << std::endl;
	cat->makeSound();
	std::cout << "Type: " << cat->getType() << std::endl;
	catAnimal->makeSound();
	std::cout << "Type: " << catAnimal->getType() << std::endl;

	delete (meta);
	delete (dog);
	delete (cat);

	std::cout << "===== Wrong Animal ===== " << std::endl;

	const WrongAnimal *wrongCat = new WrongCat();

	wrongCat->makeSound();
	std::cout << "Type: " << wrongCat->getType() << std::endl;

	delete (wrongCat);
	return (0);
}
