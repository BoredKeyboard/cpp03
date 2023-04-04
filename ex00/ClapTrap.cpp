/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 13:31:02 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/04 15:54:13 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hp(10), _energy(10), _ad(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hp(10), _energy(10), _ad(0) {
	std::cout << "name constructor called" << std::endl;
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
	this->_name = src._name;
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_ad = src._ad;
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (this->_hp <= 0) {
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	if (this->_energy <= 0) {
		std::cout << "ClapTrap " << this->_name << " has no energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
	this->_energy--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hp <= 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	this->_hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hp <= 0) {
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	if (this->_energy <= 0) {
		std::cout << "ClapTrap " << this->_name << " has no energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " repairs " << amount << " of hit points" << std::endl;
	this->_energy--;
}
