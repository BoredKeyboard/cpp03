/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 13:31:08 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/03 16:25:34 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	{
		DiamondTrap	maya("Maya");

		maya.highFivesGuys();
		maya.attack("Jack");
		maya.takeDamage(5);
		maya.beRepaired(1);
		maya.takeDamage(2);
		maya.attack("Jack");
		maya.whoAmI();
		for (int i = 0; i < 4; i++) {
			maya.attack("Jack");
			maya.beRepaired(1);
		}
	}
	std::cout << std::endl;
	{
		DiamondTrap	maya("Maya");

		maya.attack("Jack");
		maya.takeDamage(5);
		maya.beRepaired(1);
		maya.highFivesGuys();
		maya.takeDamage(6);
		maya.attack("Jack");
	}
	return (0);
}
