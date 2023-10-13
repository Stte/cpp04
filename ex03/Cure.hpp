/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:10:41 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/11 12:09:30 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(const Cure &Cure);
	Cure &operator=(const Cure &Cure);

	std::string const &getType() const; // Returns the materia type
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
