/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:10:41 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/11 12:09:30 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(const Ice &ice);
	Ice &operator=(const Ice &ice);

	std::string const &getType() const; // Returns the materia type
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
