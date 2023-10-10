#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain();
	~Brain();
	Brain(const Brain &brain);
	Brain &operator=(const Brain &brain);

	void setIdea(std::string idea, int i);
	std::string getIdea(int i) const;

private:
	std::string ideas[100];
};

#endif
