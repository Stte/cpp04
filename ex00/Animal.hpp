#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;
	protected:
		std::string type;
};

class Dog: public Animal
{
	public:
		Dog();
		~Dog();

		void makeSound() const;
};

class Cat: public Animal
{
	public:
		Cat();
		~Cat();

		void makeSound() const;
};

#endif
