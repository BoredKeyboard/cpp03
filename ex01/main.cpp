/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 13:31:08 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/29 15:24:34 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	{
		ScavTrap	maya("Maya");

		maya.attack("Jack");
		maya.guardGate();
		maya.takeDamage(5);
		maya.beRepaired(1);
		maya.takeDamage(2);
		maya.guardGate();
		maya.guardGate();
		maya.guardGate();
		maya.attack("Jack");
		for (int i = 0; i < 4; i++) {
			maya.attack("Jack");
			maya.beRepaired(1);
		}
	}
	std::cout << std::endl;
	{
		ScavTrap	maya("Maya");

		maya.attack("Jack");
		maya.guardGate();
		maya.takeDamage(5);
		maya.beRepaired(1);
		maya.guardGate();
		maya.takeDamage(6);
		maya.attack("Jack");
	}
	return (0);
}
