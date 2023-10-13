/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:05:21 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/12 16:12:13 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "ICharacter.hpp"
#include "MateriaLandfill.hpp"

class Character : public ICharacter
{
public:
	Character(std::string name);
	~Character();
	Character(const Character &character);
	Character &operator=(const Character &character);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

private:
	static const int inventory_size = 4;
	std::string name;
	AMateria *inventory[inventory_size];
	MateriaLandfill *landfill;
};

#endif
