/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/29 14:09:25 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/29 15:20:57 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap name constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src) {
	if (this == &src)
		return (*this);
	this->ClapTrap::operator=(src);
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "High fives guys!" << std::endl;
}
