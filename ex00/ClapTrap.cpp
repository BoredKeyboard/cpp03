/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 13:31:02 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/28 16:55:23 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hp(10), energy(10), ad(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : name(name), hp(10), energy(10), ad(0) {
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	if (this == &src)
		return (*this);
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (this->hp <= 0) {
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		return ;
	}
	if (this->energy <= 0) {
		std::cout << "ClapTrap " << this->name << " has no energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl;
	this->energy--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hp <= 0) {
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hp <= 0) {
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		return ;
	}
	if (this->energy <= 0) {
		std::cout << "ClapTrap " << this->name << " has no energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " repairs " << amount << " of hit points" << std::endl;
	this->energy--;
}
