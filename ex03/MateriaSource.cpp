/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:22:44 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/11 18:31:36 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < max_materia; i++)
	{
		materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &ms)
{
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ms)
{
}

void MateriaSource::learnMateria(AMateria *ms)
{
	for (int i = 0; i < max_materia; i++)
	{
		if (!materias[i])
		{
			materias[i] = ms;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
}
