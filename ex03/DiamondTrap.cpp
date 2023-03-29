/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/29 15:29:38 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/29 16:02:26 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap() {
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
}

DiamondTrap::~DiamondTrap(void) {
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "My name is: " << this->_name << " and my ClapTrap name is: " << ClapTrap::_name << std::endl;
}
