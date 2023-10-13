/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:26:24 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/12 17:13:35 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
	for (int i = 0; i < inventory_size; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < inventory_size; i++)
	{
		delete (this->inventory[i]);
		this->inventory[i] = NULL;
	}
	delete this->landfill;
	this->landfill = NULL;
}

Character::Character(const Character &character)
{
	*this = character;
}

Character &Character::operator=(const Character &character)
{
	this->name = character.name;
	for (int i = 0; i < inventory_size; i++)
	{
		delete this->inventory[i];
		this->inventory[i] = character.inventory[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < inventory_size; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (!this->inventory[idx])
		return;
	MateriaLandfill *dropped = new MateriaLandfill(this->inventory[idx]);
	dropped->next = landfill;
	landfill = dropped;
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}
