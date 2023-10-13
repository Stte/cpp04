/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:22:44 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/12 18:01:54 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < max_materia; i++)
	{
		this->materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < max_materia; i++)
	{
		delete this->materias[i];
		this->materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &ms)
{
	*this = ms;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ms)
{
	for (int i = 0; i < max_materia; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		if (ms.materias[i])
			this->materias[i] = ms.materias[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *ms)
{
	for (int i = 0; i < max_materia; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = ms;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < max_materia; i++)
	{
		if (this->materias[i] && this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	}
	return (NULL);
}
