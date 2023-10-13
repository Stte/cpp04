/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:20:51 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/13 15:20:04 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	MateriaSource *source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());

	ICharacter *player1 = new Character("Player1");
	ICharacter *player2 = new Character("Player2");

	AMateria *tmp;
	tmp = source->createMateria("ice");
	player1->equip(tmp);
	tmp = source->createMateria("cure");
	player1->equip(tmp);
	tmp = source->createMateria("ice");
	player1->equip(tmp);
	tmp = source->createMateria("cure");
	player1->equip(tmp);
	tmp = source->createMateria("cure");
	player1->equip(tmp);
	player1->unequip(2);
	player1->unequip(3);
	player1->unequip(3);

	player1->use(0, *player2);
	player1->use(1, *player2);

	delete player1;
	delete player2;
	delete source;

	system("leaks nice");

	return (0);
}
