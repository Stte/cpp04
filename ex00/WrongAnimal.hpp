#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
	protected:
		std::string type;
};

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();

		void makeSound() const;
};

#endif
