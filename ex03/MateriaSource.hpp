/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:16:16 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/12 09:57:24 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &ms);
	MateriaSource &operator=(const MateriaSource &ms);

	void learnMateria(AMateria *ms);
	AMateria *createMateria(std::string const &type);

private:
	static const int max_materia = 4;
	AMateria *materias[max_materia];
};

#endif
