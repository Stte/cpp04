/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:24:29 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/11 16:01:23 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &ice) : AMateria("ice")
{
	(void)ice;
}

Ice &Ice::operator=(const Ice &ice)
{
	(void)ice;
	return *this;
}

std::string const &Ice::getType() const
{
	return this->type;
}

AMateria *Ice::clone() const
{
	return NULL;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "
			  << target.getName()
			  << " *"
			  << std::endl;
}
