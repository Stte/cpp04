/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaLandfill.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:07:02 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/12 16:47:50 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaLandfill.hpp"

MateriaLandfill::MateriaLandfill(AMateria *materia) : materia(materia), next(NULL) {}

MateriaLandfill::~MateriaLandfill()
{
	delete materia;
	materia = NULL;
	delete next;
	next = NULL;
}

MateriaLandfill::MateriaLandfill(const MateriaLandfill &ml) : materia(ml.materia),
															  next(ml.next) {}

MateriaLandfill &MateriaLandfill::operator=(const MateriaLandfill &ml)
{
	delete materia;
	delete next;
	materia = ml.materia;
	next = ml.next;
	return (*this);
}
