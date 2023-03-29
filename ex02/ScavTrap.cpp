/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 16:58:19 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/29 13:51:20 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
	if (this == &src)
		return (*this);
	this->ClapTrap::operator=(src);
	return (*this);
}

void ScavTrap::attack(const std::string& target) {
	if (this->_hp <= 0) {
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	if (this->_energy <= 0) {
		std::cout << "ScavTrap " << this->_name << " has no energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
	this->_energy--;
}

void ScavTrap::guardGate(void) {
	if (this->_guardmode) {
		std::cout << "Scavtrap " << this->_name << " left Gate keeper mode" << std::endl;
		this->_guardmode = false;
	}
	else {
		std::cout << "Scavtrap " << this->_name << " is now in Gate keeper mode" << std::endl;
		this->_guardmode = true;
	}
}
