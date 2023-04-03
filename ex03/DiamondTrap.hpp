/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Diamondtrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/29 15:27:58 by mforstho      #+#    #+#                 */
/*   Updated: 2023/04/03 16:17:27 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_name;
		ClapTrap::_name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap(void);
		DiamondTrap & operator=(DiamondTrap const & src);
		void whoAmI(void);
};

#endif
