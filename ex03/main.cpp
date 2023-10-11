/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:20:51 by tspoof            #+#    #+#             */
/*   Updated: 2023/10/11 18:02:39 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

int main(void)
{
	Character aatu("Aatu");
	Character enemy("Kalle");
	Ice ice;
	Ice ice2;

	aatu.equip(&ice);
	aatu.use(0, enemy);
	aatu.use(1, enemy);
	aatu.equip(&ice);
	aatu.equip(&ice);
	aatu.equip(&ice);
	aatu.equip(&ice2);
	aatu.unequip(3);
	aatu.equip(&ice2);
	enemy.equip(&ice);
	return (0);
}
