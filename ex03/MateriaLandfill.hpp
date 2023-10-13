/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaLandfill.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:34 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/12 17:12:55 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_LANDFILL_HPP
#define MATERIA_LANDFILL_HPP

#include "AMateria.hpp"

class MateriaLandfill
{
public:
	MateriaLandfill(AMateria *materia);
	~MateriaLandfill();
	MateriaLandfill(const MateriaLandfill &ml);
	MateriaLandfill &operator=(const MateriaLandfill &ml);

	AMateria *materia;
	MateriaLandfill *next;
};

#endif
