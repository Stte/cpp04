/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:26:30 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/12 10:41:50 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::~AMateria() {}
AMateria::AMateria(const AMateria &amateria)
{
	*this = amateria;
}
AMateria &AMateria::operator=(const AMateria &amateria)
{
	this->type = amateria.type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
