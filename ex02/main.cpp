/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 13:31:08 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/29 15:26:00 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	{
		FragTrap	maya("Maya");

		maya.highFivesGuys();
		maya.attack("Jack");
		maya.takeDamage(5);
		maya.beRepaired(1);
		maya.takeDamage(2);
		maya.attack("Jack");
		for (int i = 0; i < 4; i++) {
			maya.attack("Jack");
			maya.beRepaired(1);
		}
	}
	std::cout << std::endl;
	{
		FragTrap	maya("Maya");

		maya.attack("Jack");
		maya.takeDamage(5);
		maya.beRepaired(1);
		maya.highFivesGuys();
		maya.takeDamage(6);
		maya.attack("Jack");
	}
	return (0);
}
