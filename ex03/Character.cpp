/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:26:24 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/11 18:10:52 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
	for (int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
}

Character::~Character()
{
	// delete[] *inventory;
}

Character::Character(const Character &character)
{
	*this = character;
}

Character &Character::operator=(const Character &character)
{
	name = character.name;
	return (*this);
}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (!inventory[idx])
		return;
	floor = inventory[idx];
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (inventory[idx])
		inventory[idx]->use(target);
}
