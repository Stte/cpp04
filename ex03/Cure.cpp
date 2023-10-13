/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:24:29 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/12 10:40:41 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &Cure) : AMateria(Cure.type) {}

Cure &Cure::operator=(const Cure &Cure)
{
	this->type = Cure.type;
	return *this;
}

std::string const &Cure::getType() const
{
	return (this->type);
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals "
			  << target.getName()
			  << "’s wounds *"
			  << std::endl;
}
