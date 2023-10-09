#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const int animal_count = 4;
	Animal *animals[animal_count] = {new Dog(), new Dog(), new Cat(), new Cat()};

	std::cout << "Delete" << std::endl;
	for (int i = 0; i < animal_count; i++)
	{
		delete animals[i];
	}

	std::cout << "\noriginalDog" << std::endl;
	Dog originalDog;
	originalDog.getBrain().setIdea("hauhau", 0);
	std::cout << "originalDog: " << originalDog.getBrain().getIdea(0) << std::endl;

	std::cout << "\ncopyDog" << std::endl;
	Dog copyDog(originalDog);
	std::cout << "originalDog: " << originalDog.getBrain().getIdea(0) << std::endl;
	std::cout << "copyDog: " << originalDog.getBrain().getIdea(0) << std::endl;
	originalDog.getBrain().setIdea("no hau", 0);
	std::cout << "originalDog: " << originalDog.getBrain().getIdea(0) << std::endl;
	std::cout << "copyDog: " << copyDog.getBrain().getIdea(0) << std::endl;

	std::cout << "\nassignDog" << std::endl;
	Dog assignDog = originalDog;
	std::cout << "originalDog: " << originalDog.getBrain().getIdea(0) << std::endl;
	std::cout << "copyDog: " << copyDog.getBrain().getIdea(0) << std::endl;
	std::cout << "assignDog: " << assignDog.getBrain().getIdea(0) << std::endl;
	originalDog.getBrain().setIdea("yes hau", 0);
	std::cout << "originalDog: " << originalDog.getBrain().getIdea(0) << std::endl;
	std::cout << "copyDog: " << copyDog.getBrain().getIdea(0) << std::endl;
	std::cout << "assignDog: " << assignDog.getBrain().getIdea(0) << std::endl;
	std::cout << std::endl;
	return (0);
}
