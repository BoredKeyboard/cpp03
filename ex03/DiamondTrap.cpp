/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/29 15:29:38 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/03 16:32:00 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap() {
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {
	std::cout << "DiamondTrap name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src) {
	if (this == &src)
		return (*this);
	this->ClapTrap::operator=(src);
	return (*this);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "My name is: " << this->_name << " and my ClapTrap name is: " << ClapTrap::_name << std::endl;
}
